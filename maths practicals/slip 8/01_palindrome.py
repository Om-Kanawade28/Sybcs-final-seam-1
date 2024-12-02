#Write a program to check if the given number is palindrome or not.
num = int(input("Enter the Number:-"));
reverse = 0
temp = num
while temp > 0:
    reminder = temp%10
    reverse = (reverse*10) + reminder
    temp //= 10
    
if num == reverse:
    print(num," is palindrome")
else:
    print(num," is not palindrome")
