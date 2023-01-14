def sep_bit(l, n):
    ln = []
    for i in l:
        if i == n:
            ln.append(i)
    return ln

def separate(l):
    ln = []
    ln.extend(sep_bit(l, 0))
    ln.extend(sep_bit(l, 2))
    ln.extend(sep_bit(l, 1))
    return ln

if __name__ == "__main__":
    # l = [0,0,1,2,1,0,2]
    l = list(map(int, input("Enter the List separated by spaces : ").split()))

    print(f"Output : {separate(l)}")