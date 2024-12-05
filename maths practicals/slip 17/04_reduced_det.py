from sympy import *
A = Matrix([[1,2,3],[2,5,3],[1,0,8]])
print("Transpose=",A.T)
print("Determinate=",A.det())
print("inverse=",A.inv())
print("reduced row eblon form=",A.rref())
P,D = A.diagonalize()
print("P=",P)
print("D=",D)