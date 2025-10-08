class Account:
    def __init__(self,bal,acc_no):
        self.balance=bal
        self.Account_no=acc_no
        print("total balance",self.balance ,"Account no ",self.Account_no)
    def debit(self , amount):
        self.balance -= amount
        print("Rs",amount,"debited in acc no",self.Account_no )
        print("total balance in your account Rs ",self.get_balance() )
    def credit(self,amount):
        self.balance +=amount
        print("Rs",amount,"credited in acc no", self.Account_no)
        print("total balance in your account Rs ",self.get_balance() )
    def get_balance(self):
        return self.balance
c1=Account(10000,12345)
c2=Account(20000,67890)
c1.debit(1000)
c1.credit(500)
c2.debit(1000)
c2.credit(5000)
print("total balance",c1.balance)
print("total balance",c2.balance)

