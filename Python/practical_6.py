def opera_eq(l):
    ul = set(l)
    cl = []
    for i in ul:
        cl.append(l.count(i))
    return len(l)-max(cl)

if __name__ == "__main__":
    l = list(map(int, input("Enter the Input : ").split()))
    print(f"Output : {opera_eq(l)}")