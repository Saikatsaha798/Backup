def sum_dic(d):
    s = 0
    for i in d.items():
        for j in i:
            s += j
    return s

if __name__ == "__main__":
    d = {9:5, 3:12, 5:9, 4:9, 3:8}
    s = sum_dic(d)
    print(f"Input : {d}")
    print(f"Sum : {s}")