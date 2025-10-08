from cs50 import get_float
change=0
coins=0
while change<=0:
    change=get_float("change: ")
def coiner(cointoreduce):
    global change
    global coins
    while (change>=cointoreduce):
        change=round((change-cointoreduce),10)
        coins +=1
coiner(0.25)
coiner(0.10)
coiner(0.05)
coiner(0.01)
print(coins)
