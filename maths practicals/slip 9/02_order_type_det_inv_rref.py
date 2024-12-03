from sympy import *
A = Matrix([[1,2,3],[4,5,6],[7,8,9]])
print("Order=",A.shape)
print("Type=",type(A))
#print("Inverse=",A.inv())
print("reduced row echelon form==",A.rref())
try:
    inverse = A.inv()
    print("Inverse=", inverse)
except NonInvertibleMatrixError:
    print("Matrix is singular. Inverse does not exist.")

