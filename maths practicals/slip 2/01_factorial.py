'''Write a python code to find factorial of a number.'''
def factorial(n):
    if n==0:
        return 1;
    else:
        return n*factorial(n-1)
    
no = int(input("Enter the number:-"));
result = factorial(no)
print(f"factorial of {no} is {result}")

