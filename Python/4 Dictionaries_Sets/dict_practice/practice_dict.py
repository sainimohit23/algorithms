fruit = {"Orange": ["My favourite"],
         "apple": "good for health",
         "mango": "Can eat to infinity",
         "watermelon": "perfect for summers",
         }

# print(fruit)
# fruit["tomato"] = "it's not a fruit"
# # for key in fruit:
# #     print(fruit[key])
#
# mykeys = list(fruit.keys())
# print(mykeys)
# print("items", tuple(fruit.items()))
# print("*" * 400, "\n now i will make dictionary out of a tuple\n\n")

# while True:
#     dicti_key = input("Enter the key ")
#     if dicti_key == "quit":
#         break
#     print(fruit.get(dicti_key))

# my_tuple = (100, "hundred"), (200, "do soo"), (300, "teen soo")
# ne_dict = dict(my_tuple)
#
# for key in ne_dict:
#     print(key, " : ", ne_dict[key])


print('*' * 40)
my_val = list(fruit["Orange"])
my_val.append("orange in colour")
fruit["Orange"] = my_val
print(fruit["Orange"])
