from sympy import *
A = Matrix([[-1,1,0],[8,5,2],[2,-6,2]])
B = Matrix([[9,0,3],[1,4,1],[1,0,-1]])

print("2A + B==",2*A + B)
print("3A - 5B==",3*A - 5*B)
print("A^-1==",A.inv())
print("B^-1===",B.inv())
print("A^T + B^T==",A.T + B.T)