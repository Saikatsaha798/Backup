def mul_ten(s):
    n = s
    if s == 0:
        return "yes"
    else:
        while n != 0:
            if n%10 == 0:
                return "yes"
            n = n//10
        return "no"

if __name__ == "__main__":
    n = int(input("Enter the input : "))
    print(f"Output : {mul_ten(n)}")