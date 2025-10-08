class student:
    college="Ramachandra"
    def __init__(self, name, marks):
        self.name=name
        self.marks=marks
    def info(self):
        print("welcome ",self.name)
    def thebest(self):
        return self.marks
c1=student("Feroz",51)
c2=student("Sameer",55)
print(c1.name,c1.marks)
print(c2.name,c2.marks)
print(student.college)
c1.info()
print(c1.thebest())
