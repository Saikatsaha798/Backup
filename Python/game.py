import random

n = random.randint(0, 100)

action = True

c = 0

while action:
    n1 = int(input("Enter your guess : "))
    
    if n > n1:
        print("More than the current Guess! ")
    
    elif n < n1:
        print("Less than the current Guess! ")

    else:
        action = False
    c += 1

print("You successfully guessed the number in", c, "attempts.")