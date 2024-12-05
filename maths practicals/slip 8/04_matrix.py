from sympy import *
A = Matrix([[1,-1,1],[-1,1,-1],[1,-1,1]])
print(A.eigenvals())
print(A.eigenvects())
print(A.det())
print(A.is_diagonalizable())
