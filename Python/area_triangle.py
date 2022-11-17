a = float(input("Enter the First Side : "))
b = float(input("Enter the Second Side : "))
c = float(input("Enter the Third Side : "))

s = (a + b + c) / 2

area = ((s)*(s-a)*(s-b)*(s-c))**(1/2)

print("Area of Triangle : ",area)