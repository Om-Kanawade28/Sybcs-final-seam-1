from sympy import *
A = Matrix([[1,2,2],[2,1,1],[2,2,1]])
print("Eigenvalues=",A.eigenvals())
print("Eigenvectors=",A.eigenvects())