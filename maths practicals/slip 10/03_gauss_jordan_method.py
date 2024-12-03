from sympy import *
A = Matrix([[2,1],[1,2]])
b = Matrix([7,5])
print(A.gauss_jordan_solve(b))