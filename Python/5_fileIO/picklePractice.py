import pickle

# my_tuple = (('hello stranger', 'naked cartoon character'), 'penguin meme', 'yo! mama meme')
# with open("my_pickle", 'wb') as my_pickle:
#     pickle.dump(my_tuple, my_pickle)

with open("my_pickle", 'rb') as my_pickle:
    tp = pickle.load(my_pickle)

print(tp)

first, second, third = tp

for i in first:
    print(i)
print(second)
print(third)
