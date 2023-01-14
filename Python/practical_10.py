def pos_mul(l):
    n = 0 
    for i in l:
        if i < 0:
            n += 1
    
    if n%2 == 0:
        return 0
    else:
        return 1

if __name__ == "__main__":
    l = list(map(int, input("Enter the Numbers : ").split()))
    print(f"Output : {pos_mul(l)}")