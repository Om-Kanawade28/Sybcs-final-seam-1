from sympy import *
A = Matrix([[1,1,1],[0,1,1],[0,0,1]])
print("Eigenvalues=-",A.eigenvals())
print("Eigenvectors=-",A.eigenvects())
print(A.is_diagonalizable())