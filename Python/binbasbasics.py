t = int(input())

for i in range(t):
    n,k = map(int, input().split(' '))
    s = list(input())
    
    c = 0
    
    for j in range(n//2):
        if s[j] != s[n-1-j]:
            c += 1

    if k >= c:
        if n%2 == 1:
            print("YES")
        
        elif (k - c)%2 == 0:
            print("YES")
            
        else:
            print("NO")
    else:
        print("NO")