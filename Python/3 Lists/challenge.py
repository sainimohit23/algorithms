my_list = [1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10]
my_iterator = iter(my_list)
for i in range(0, len(my_list)):
    next_ele = next(my_iterator)
    print(next_ele)