def insert(data):
    roll = int(input("Enter the Roll Number : "))
    name = input("Enter the Name : ")
    sec = input("Enter the Section : ")
    a = int(input("Enter the Marks of A : "))
    b = int(input("Enter the Marks of B : "))
    c = int(input("Enter the Marks of C : "))
    data[roll] = [name, sec, [a,b,c], (a+b+c)/3]
    return data

def max_marks(data):
    a, b, c = 0, 0, 0
    max_a, max_b, max_c = 0, 0, 0
    for i in data.keys():
        if data[i][2][0] > a:
            a = data[i][2][0]
            max_a = data[i][0]
        if data[i][2][1] > b:
            b = data[i][2][1]
            max_b = data[i][0]
        if data[i][2][2] > c:
            c = data[i][2][2]
            max_c = data[i][0]
    return  [max_a, max_b, max_c]
        
def ui():
    print("Choose from below :\n"
    "1. Insert data\n"
    "2. Display Data\n"
    "3. Calculate Maximums\n"
    "4. Exit")
    ch = int(input("Enter the choice : "))
    return ch

if __name__ == "__main__":
    data = {1: ['Ram', 'A', [92, 93, 94], 93.0], 2: ['Shyam', 'A', [82, 73, 91], 82.0], 3: ['Chesu', 'B', [83, 98, 92], 91.0], 4: ['Beachboy', 'C', [93, 93, 92], 92.66666666666667]}
    while True:
        ch = ui()
        if ch == 1:
            data = insert(data)
            print("Data added")
        elif ch == 2:
            for i in data.items():
                print(i)
        elif ch == 3:
            a = max_marks(data)
            print(f"Maximum marks in Subject A :  {a[0]}")
            print(f"Maximum marks in Subject B :  {a[1]}")
            print(f"Maximum marks in Subject C :  {a[2]}")
        elif ch == 4:
            print("Program ended")
            break