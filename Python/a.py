with open("acm_001.txt", encoding='utf-8') as  f:
    a = f.read()

a = a.split("\n\n")
a_new = []

text = []

for i in a:
    l = i.split("\n")
    for i in l:
        if i[:6] == "#index":
            c = i[-1]
        
        elif i[:2] == "#c":
            t = i[2:]
    
    txt = f"{c}@#{t}\n"
    
    with open("new.txt", 'a', encoding='utf-8') as f:
        f.write(txt)
        
