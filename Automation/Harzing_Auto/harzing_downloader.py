from ast import main
from unicodedata import name
import pyautogui,time,os
import pandas as pd
from PIL import Image, ImageGrab

def set_folder(names):
    try:
        for i in names:
            os.mkdir(i[2])
    except Exception as ex:
        print(ex)

def init_folder():
    df = pd.read_csv("co_author.csv")
    data = df.to_numpy()
    names = []
    id = 1
    for i in data[:, 1:2]:
        if i[0] == i[0]:
            nam = ''
            name = i[0]
            l = name.split("\n")
            name = " ".join(l)
            for j in name:
                if (ord(j) <= 90 and ord(j) >= 65) or (ord(j) <= 122 and ord(j) >= 97) or j == '-' :
                    nam += j
                elif j == ' ':
                    nam += "_"
            # print([id, name, f"{id}_{nam}"])
            names.append([id, name, f"{id}_{nam}"])
            id+=1
    set_folder(names)

    return names

def fetch_links():
    df = pd.read_csv("co_authors_extract_without_repetition.csv")
    data = df.to_numpy()
    name = ''
    link = []
    lin = data[:, 3:4]
    nam = data[:, 1:2]
    co = data[:, 2:3]
    for i in range(len(lin)):
        if nam[i][0] == nam[i][0]:
            name = nam[i][0]
        link.append([name, lin[i][0], co[i][0]])
    
    # print(link) 
    return link

def fetch_id():
    link = fetch_links()
    
    auth_id = []
    for i in link:
        uid = i[1]
        # print(uid)
        l = uid.split("user=")
        uid = l[-1]
        l = uid.split("&")
        uid = l[0]
        auth_id.append([i[0], uid, i[2]])
    
    return auth_id

def input_id(id_specific):
    # Point(x=283, y=260)           input

    pyautogui.leftClick(283, 260)
    for i in range(20):
        pyautogui.press('right')
        pyautogui.press('backspace')

    pyautogui.write(id_specific)

    # Point(x=1660, y=232)              search
    pyautogui.leftClick(1660, 232)


def wait():
    time.sleep(2)
    while True:
        pic = ImageGrab.grab()
        data5 = pic.load()
        if data5[1228, 472] == (0, 19, 192):
            time.sleep(2)
        else:
            time.sleep(2)
            break

def cancel():
    pyautogui.moveTo(917, 951)
    time.sleep(2)
    pic = ImageGrab.grab()
    data5 = pic.load()
    if data5[917, 951] == (224, 238, 249):
        pyautogui.leftClick(917, 951)
        return True
    else:
        return False
    
    # a,b = list(pyautogui.position())
    # print([a,b],data5[a,b])
    # [1228, 472] (0, 19, 192)
    # 917 951
    # (224, 238, 249)



if __name__ == "__main__":
    names = init_folder()
    id = fetch_id()
    na = ''
    ct = 0
    cnt = 1

    # time.sleep(7)

    for j in id:
        nam = ''
        # time.sleep(5)
        ch = 0


        input_id(j[1])

        if (cancel()):
            continue
        
        # # Point(x=1824, y=363)        Save
        pyautogui.leftClick(1824, 363)

        time.sleep(1)

        # # Point(x=1685, y=500)        Csv
        pyautogui.leftClick(1685, 500)

        wait()

        if na != j[0]:
            ct += 1
            cnt = 1
            na = j[0]
        else:
            cnt += 1

        wdir = os.getcwd()

        for k in na:
                if (ord(k) <= 90 and ord(k) >= 65) or (ord(k) <= 122 and ord(k) >= 97) or k == '-' :
                    nam += k
                elif k == ' ':
                    nam += "_"
            # print([id, name, f"{id

        for i in os.listdir():
            if nam in i:
                wdir+= f"\\{i}"
        
        
        wdir += f"\\{ct}_C{cnt}_{j[2]}"
        # print(wdir)

        pyautogui.write(wdir)
        pyautogui.press('enter')

    # for i in os.listdir():
    #     print(i[0])


    # pyautogui.leftClick(1660, 232)

    # pyautogui.moveTo(917, 951)

    # for i in range(30):
    #     time.sleep(2)
    #     # b = pyautogui.position()
    #     # print(b[0], b[1])
    #     pic = ImageGrab.grab()
    #     data5 = pic.load()
    #     print(data5[917, 951])
    #     # print(data5[b[0], b[1]])
    #     # 917 951
    #     # (224, 238, 249)
    