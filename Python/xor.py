from re import A


def d2b(a):
    s = ""
    while a!=0:
        s += str(a%2)
        a = a//2
    l = s.split();
    l.sort(reverse=True)
    s = "".join(l)

    s = (5-len(s))*"0" + s

    return s

def xor(a,b):
    s=""
    for i in range(0,len(a)):
        if a[i]==b[i]:
            s+="0"
        else:
            s+="1"
    
    return s


for i in range(1,21):
    print(d2b(i))
