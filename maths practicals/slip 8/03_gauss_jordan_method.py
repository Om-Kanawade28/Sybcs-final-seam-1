from sympy import *

A = Matrix([[1,2,3],[4,5,6],[7,8,10]])
b = Matrix([2,6,9])
print(A.gauss_jordan_solve(b))