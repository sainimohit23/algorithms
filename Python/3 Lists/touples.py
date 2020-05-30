mytoup = "hi", "how", 1947, [12, 13, 14, 15]
print(mytoup[0], mytoup[1], mytoup[2], mytoup[3])
print(mytoup)

newtoup = mytoup[3]
newtoup[0] = 54
print(newtoup[0], newtoup[1], newtoup[2])

toup, first, second, third = mytoup

print(toup, first, second, third)
myint = third[0]
print(myint)
print(third[0])

lister = [1, 2 , 3, 4]
lister[0] = 5
print(lister)
