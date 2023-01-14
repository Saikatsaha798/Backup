def apps(t, a, b, c):
    f = t-(a+b)
    if t-(a+b) >= c:
        return 0
    else:
        if f+a >= c:
            return 1
        elif f+b >= c:
            return 1
        else:
            return 2

if __name__ == "__main__":
    t, a, b, c = map(int, input("Enter the input : ").split())
    print(f"Output : {apps(t, a, b, c)}")