with open("new.txt", 'r', encoding='latin1') as f:
    a = f.readlines()

l = []

for i in a:
    if int(i[0]) not in l:
        l.append(int(i[0]))

with open("new1.txt", 'w') as k:
    k.write(str(l))