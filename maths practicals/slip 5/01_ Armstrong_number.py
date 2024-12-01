'''Write a program in python to check whether given number is Armstrong
number or'''
num = int(input("Enter the Number:-"))
dgno = int(input("Enter the digit of your number:-"))
temp = num
sumd = 0
while temp != 0:
    digit = temp%10
    sumd += digit**dgno
    temp //= 10
    
if num == sumd:
    print(f"{num} is Armstrong number")
else:
    print(f"{num} is not Armstrong number")


