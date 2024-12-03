''' Write a function in python that calculates area and perimeter of a triangle if sides are
given .'''
import math
def area_perimeter(a,b,c):
    s = (a + b + c)/2
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))
    perimeter = a + b + c
    return area,perimeter
a = int(input("Enter the side a="))
b = int(input("Enter the side b="))
c = int(input("Enter the side c="))
area,perimeter = area_perimeter(a,b,c)
print("Area of triangle=",area)
print("Perimeter of triangle=",perimeter)