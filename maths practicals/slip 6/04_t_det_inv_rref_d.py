from sympy import *
A = Matrix([[1,2,3],[2,5,3],[1,0,8]])
print("Transpose==",A.T)
print("Determinant==",A.det())
print("Inverse-==",A.inv())
print("reduced row echolon form==",A.rref())
P,D = A.diagonalize()
print("P=",P)
print("D=",D)