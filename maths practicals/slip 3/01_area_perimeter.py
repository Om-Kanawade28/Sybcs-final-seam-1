#Using pythoncode to calculate area and perimeter of a circle
import math

def calculate_area_volume(r):
    area = math.pi*r**2
    perimeter = 2*math.pi*r
    return area,perimeter

no = int(input("Enter the redius of circle:-"))
area,perimeter = calculate_area_volume(no)
print("Area=",area)
print("perimeter of circle=",perimeter)