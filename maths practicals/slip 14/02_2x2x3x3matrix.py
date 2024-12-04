from sympy import *
A = Matrix([[1,0,5],[2,1,6],[3,4,0]])
B = Matrix([[2,5],[-1,5]])
print("determinate A =",A.det())
print("determinate B =",B.det())
print("inverse A = ",A.inv())
print("inverse B",B.inv())
try:
    print("A + B=",A +B)
    print("B + A= ",B + A)
except:
    print( "A and B matrix is not same Order for  addition")