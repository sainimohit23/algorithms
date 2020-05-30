import random

highest = 10
ans = random.randint(1, highest)

guess = int(input("Guess the number between 1 and 10 : "))
flag = 0
if guess == ans:
    print("You guessed it right. {} is right choice".format(ans))

while guess != ans:
    if guess == 0:
        print("Bhaag ")
        break
    elif guess < ans:
        guess = int(input("Guess higher : "))
        if ans == guess:
            print("You guessed it right. {} is right choice".format(ans))
            continue
    elif guess > ans:
        guess = int(input("Guess lower : "))
        if ans == guess:
            print("You guessed it right. {} is right choice".format(ans))