class bike:
    def __init__(self):
        self.brk=False
        self.acc=False
        self.clu=False
        self.gear=False
    def start(self):
        self.acc=True
        self.clu=True
        self.gear=True
        print("Bike was successfully Started....")
b1=bike()
b1.start()

