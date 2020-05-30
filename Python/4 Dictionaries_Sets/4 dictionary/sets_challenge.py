my_str = input("enter some text please ")
my_set = set(my_str)

vowels = set("aeiou")

finalset = my_set.difference(vowels)
finallist = sorted(finalset)
for num in finallist:
    print(num)
