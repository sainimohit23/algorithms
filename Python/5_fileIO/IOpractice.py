# my_file = open("C:\\Users\\Babban\\Desktop\\Python\\5_fileIO\\sample.txt", 'r')
# for line in my_file:
#     print(line,  end='')
# my_file.close()

with open("sample.txt", 'r') as my_file:
    for line in my_file:
        print(line, end='')
print('*'*60)

with open("sample.txt", 'r') as my_file:
    line = my_file.readline()
    while line:
        print(line[::-1], end='')
        line = my_file.readline()
print('*'*60)

with open("sample.txt", 'r') as my_file:
    lines = my_file.readlines()
    for line in lines[::-1]:
        print(line, end='')
print('*'*60)

with open("sample.txt", 'r') as my_file:
    lines = my_file.read()
    for line in lines[::-1]:
        print(line, end='')
