if __name__ == '__main__':
    l = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([name, score])
        
    lg = []
    for i in l:
        lg.append(i[1])
    
    lg.sort()
    
    c = 100
    
    for i in lg:
        if c<i:
            sl = i
            break
        c = i
        
    ans = []
    
    for i in l:
        if sl in i:
            ans.append(i[0])
    
    ans.reverse()
            
    for i in ans:
        print(i)