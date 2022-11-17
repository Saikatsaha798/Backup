def linear_search(l, a):
    found = 0
    for i in l:
        if a == i:
            found = 1
            return True
    if found == 0:
        return False


def binary_search(l, a):
    res = False
    if len(l) != 0:
        mid = l[(len(l)//2)]
        if mid == a:
            return True
        elif mid > a:
            res = binary_search(l[:(len(l)//2)], a)
        else:
            res = binary_search(l[(len(l)//2)+1:], a)
        return res
    else:
        return res

def search_range(l, a):
    occurences = []
    for i in range(len(l)):
        if a == l[i]:
            occurences.append(i)
    return occurences

def search_enumerate(l, a):
    occurences = []
    for i in enumerate(l):
        if a == i[-1]:
            occurences.append(i[0])
    return occurences

if __name__ == "__main__":
    print(search_enumerate([1,1,2,1,3,4,5,1], 1))