import requests
from bs4 import BeautifulSoup
import pandas as pd

# url = "a.html"

def url_fetch():
    r = open("a.html", encoding='utf-8')
    soup = BeautifulSoup(r, 'html.parser')
    url = []
    for i in soup.find('tbody').find_all('a'):
        url.append(i.get('href'))

    return url
# s = ''
# for i in soup.find('tbody'):
#     s += i.get_text()
# l = s.split("\n")
# print(len(l))

def page_fetch(url, root=True):
    data = []
    r = requests.get(url, verify= False)
    soup = BeautifulSoup(r.content, 'html.parser')
    na = soup.find('h2').get_text()
    name = ''
    for i in na:
        if i.isalpha() or i == ' ' or i == '-':
            name += i
            
    data.append(name)
    l = soup.find("div").find("span").get_text().split()
    if len(l)>= 3:
        l.pop(0)
        year = l[-1]
        l.pop(-1)
        data.append(" ".join(l))
        data.append(year)
    if root:
        c = 0
        adv  = []
        for i in (soup.find_all('p')):
            if c == 2:
                for j in i.find_all('a'):
                    adv.append(page_fetch(f"https://genealogy.math.ndsu.nodak.edu/{j.get('href')}", False))
                break
            c += 1
        data.append(adv)
    return data
            
def check_scholar(data, dataset):
    c = False
    name = data[0]
    n = ''
    for i in name:
        if i == ' ':
            n += "+"
        else:
            n += i
    
    url = f"https://scholar.google.com/citations?hl=en&view_op=search_authors&mauthors={n}="
    # print(url)
    r = requests.get(url)
    soup = BeautifulSoup(r.content, 'html.parser')
    try:
        a = soup.find("p").get_text()
        if "didn't match" in a:
            c = False
        else:
            c = True
            # dataset.append(data)
    except:
        c = True
        # dataset.append(data)

    if c:
        cite = soup.find(id="gsc_sa_ccl").find('a').get("href")
        for j in range(5 - len(data)):
            data.append([])
        data[4] = f"https://scholar.google.com/{cite}"
        dataset.append(data)

    return dataset


if __name__ == "__main__":
    dataset = []
    url = url_fetch()
    # print(url[0])
    for i in url:
        dataset = check_scholar(page_fetch(i), dataset)
        print(f"{round((((url.index(i)+1)/len(url))*100), 2)} % Completed !")
    df = pd.DataFrame(dataset, columns=['Name','University','Year of Graduation','Advisor','Link'])
    df.to_csv("root_author.csv")
    
    # check_scholar()
    
