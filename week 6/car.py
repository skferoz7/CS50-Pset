class car:
    def __init__(self,brand,model):
        self.brand=brand
        self.model=model
    def speed(self):
        print("100 kmph")
c1=car("defender","model x")
c2=car("thor","model y")
print(c1.brand,c1.model)
print(c2.brand,c2.model)
c1.speed()
c2.speed()
