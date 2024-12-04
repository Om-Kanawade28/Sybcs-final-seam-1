'''Write a Python Code to create the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
'''
num = int(input("Enter the row"))
for i in range(1,num+1):
    for j in range(1,i+1):
        print(j,end=" ")
    print()