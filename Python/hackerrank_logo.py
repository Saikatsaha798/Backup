def pattern(size):
    b = 2*(size-1)+1
    for i in range(size):
        n_h = 2*i+1
        print((n_h*"H").center(b, " "))
        
    w = 3*size
    l_m1 = (b - size)//2
    
    for i in range(size+1):
        print(l_m1*" ", end = "")
        print(size*"H", end = "")
        print(w*" ", end = "")
        print(size*"H")
        
    for i in range((size+1)//2):
        print(l_m1*" ", end = "")
        print(5*size*"H")
        
    for i in range(size+1):
        print(l_m1*" ", end = "")
        print(size*"H", end = "")
        print(w*" ", end = "")
        print(size*"H")
    
    m2 = 4 * size
    for i in range(size-1, -1, -1):
        n_h = 2*i+1
        print(m2*" ", end = "")
        print((n_h*"H").center(b, " "))
        
if __name__ == "__main__":
    n = int(input())
    pattern(n)
