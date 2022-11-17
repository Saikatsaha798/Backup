t = int(input())

for z in range(t):
    n = int(input())
    s1 = str(input())

    s = [int(y) for y in s1 if y != " "]

    max = max(s)
    operations = 0
    i = 0
    
    if n == 2:
        s = s[0] + s[1]
        operations = 1

    elif s.count(max) == n:
        operations = 0

    else:
        while i < (len(s) - 1):
            if s[i] + s[i+1] == max :
                s[i] = s[i] + s[i+1]
                operations += 1
                s.pop(i+1)

    print(operations)