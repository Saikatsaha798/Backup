def read(num):
    data = {
        0 : "zero",
        1 : "one",
        2 : "two",
        3 : "three",
        4 : "four",
        5 : "five",
        6 : "six",
        7 : "seven",
        8 : "eight",
        9 : "nine"
    }
    ans = ""

    if num == 0:
        return data[0]
    else:
        for i in str(num):
            if ans == "":
                ans = data[int(i)]
            else:
                ans += f" {data[int(i)]}"
    
    return  ans

if __name__ == "__main__":
    num = int(input("Enter the Number : "))
    print(f"Output : {read(num)}")