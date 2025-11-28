from functools import wraps
from flask import redirect, session, url_for, render_template

def login_required(f):
    @wraps(f)
    def decorated(*args, **kwargs):
        if "user_id" not in session:
            return redirect(url_for('login'))
        return f(*args, **kwargs)
    return decorated

def apology(message, code=400):
    return render_template('apology.html', top=code, bottom=message), code
