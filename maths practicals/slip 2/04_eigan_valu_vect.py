from sympy import *
A = Matrix([[1,2,2],[2,1,1],[2,2,1]])
print("eigenvalues=",A.eigenvals())
print("eigenvectors=",A.eigenvects())