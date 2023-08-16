def using_loop(str):
    str_res =  ""
    for i in range(len(str)-1, -1, -1):
        str_res += str[i]
    return str_res

def using_slicing(str):
    return str[::-1]

print(using_slicing("Saikat Saha"))