from sympy import *
A = Matrix([[1,3,3],[2,2,3],[4,2,1]])
print("eigenvalues=",A.eigenvals())
print("eigenvectors=",A.eigenvects())
P,D = A.diagonalize()
print("P==",P)
print("D==",D)