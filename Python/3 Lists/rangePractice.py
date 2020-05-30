import random
ran = random.randint(1, 100)
myRn = range(0, ran, 3)
newRn = range(0, ran)
print(myRn)
for i in myRn[::2]:
    print(i)

