word = "OTHER"

for j in range(6):
    guess = input("Enter your guess (in Caps) : ")
    hint = ""

    if len(guess) == 5:
        for i in range(5):
            if guess[i] == word[i]:
                hint = hint + "G"
            elif guess[i] in word:
                hint = hint + "Y"
            else:
                hint = hint + "B"

        print(hint)

        if hint == "GGGGG":
            print(f"WORDLE {j+1}/6")
            break

    else:
        print("wrong input length !")

if hint != "GGGGG":
    print("WORDLE X/6")