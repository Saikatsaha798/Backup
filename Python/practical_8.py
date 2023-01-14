def check_prog(l):
    work = 0
    for i in l:
        if i >= 10 :
            work += 1
    return work

if __name__ == "__main__":
    l = list(map(int, input("Enter the Numbers : ").split()))
    print(f"Ouput : {check_prog(l)}")