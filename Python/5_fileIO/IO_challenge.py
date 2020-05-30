with open("sample.txt", 'a') as my_file:
    for i in range(2, 13):
        for j in range(1, 11):
            print("{1:>2} times {0} is equal to {2} ".format(i, j, i*j), file=my_file)
        print('='*50, file=my_file)
