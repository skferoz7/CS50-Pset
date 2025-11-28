from flask import Flask, render_template, request, redirect, session, url_for, flash
from werkzeug.security import generate_password_hash, check_password_hash
from cs50 import SQL
import os
from helpers import login_required, apology

app = Flask(__name__)
app.secret_key = os.environ.get('SECRET_KEY') or 'replace-with-secure-key'

# CS50 SQL
db = SQL('sqlite:///tasks.db')

def init_db():
    if not os.path.exists('tasks.db'):
        with open('models.sql') as f:
            sql = f.read()
        for stmt in sql.split(';'):
            stmt = stmt.strip()
            if stmt:
                db.execute(stmt)

@app.route('/')
@login_required
def index():
    user = session['user_id']
    tasks = db.execute('SELECT * FROM tasks WHERE user_id = ? ORDER BY due_date', user)
    total = len(tasks)
    completed = sum(1 for t in tasks if t['status'] == 'completed')
    return render_template('dashboard.html', tasks=tasks, total=total, completed=completed)

@app.route('/register', methods=['GET','POST'])
def register():
    if request.method == 'POST':
        username = request.form.get('username')
        password = request.form.get('password')
        if not username or not password:
            return apology('must provide username and password', 400)
        hash_pw = generate_password_hash(password)
        try:
            db.execute('INSERT INTO users (username, hash) VALUES (?, ?)', username, hash_pw)
        except:
            return apology('username already taken', 400)
        flash('Registered. Please log in.')
        return redirect(url_for('login'))
    return render_template('register.html')

@app.route('/login', methods=['GET','POST'])
def login():
    if request.method == 'POST':
        username = request.form.get('username')
        password = request.form.get('password')
        if not username or not password:
            return apology('must provide username and password', 400)
        rows = db.execute('SELECT * FROM users WHERE username = ?', username)
        if len(rows) != 1 or not check_password_hash(rows[0]['hash'], password):
            return apology('invalid username or password', 400)
        session.clear()
        session['user_id'] = rows[0]['id']
        return redirect(url_for('index'))
    return render_template('login.html')

@app.route('/logout')
def logout():
    session.clear()
    return redirect(url_for('login'))

@app.route('/add', methods=['GET','POST'])
@login_required
def add():
    if request.method == 'POST':
        title = request.form.get('title')
        if not title:
            return apology('title required', 400)
        description = request.form.get('description') or ''
        category = request.form.get('category') or 'General'
        due_date = request.form.get('due_date') or None
        db.execute('INSERT INTO tasks (user_id, title, description, category, due_date) VALUES (?, ?, ?, ?, ?)',
                   session['user_id'], title, description, category, due_date)
        return redirect(url_for('index'))
    return render_template('add_task.html')

@app.route('/edit/<int:task_id>', methods=['GET','POST'])
@login_required
def edit(task_id):
    task = db.execute('SELECT * FROM tasks WHERE id = ? AND user_id = ?', task_id, session['user_id'])
    if not task:
        return apology('task not found', 404)
    task = task[0]
    if request.method == 'POST':
        title = request.form.get('title')
        if not title:
            return apology('title required', 400)
        db.execute('UPDATE tasks SET title = ?, description = ?, category = ?, due_date = ?, status = ? WHERE id = ? AND user_id = ?',
                   request.form.get('title'), request.form.get('description'), request.form.get('category'),
                   request.form.get('due_date'), request.form.get('status'), task_id, session['user_id'])
        return redirect(url_for('index'))
    return render_template('edit_task.html', task=task)

@app.route('/complete/<int:task_id>')
@login_required
def complete(task_id):
    db.execute("UPDATE tasks SET status = 'completed' WHERE id = ? AND user_id = ?", task_id, session['user_id'])
    return redirect(url_for('index'))

@app.route('/delete/<int:task_id>')
@login_required
def delete(task_id):
    db.execute('DELETE FROM tasks WHERE id = ? AND user_id = ?', task_id, session['user_id'])
    return redirect(url_for('index'))

if __name__ == '__main__':
    init_db()
    app.run(debug=True)
