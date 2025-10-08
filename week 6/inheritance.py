class Parent:
    def print1():
        print("I Am parent class")
class child(Parent):
    def __init__(self):
        self.print1()
c1=child
print(c1.print1())


