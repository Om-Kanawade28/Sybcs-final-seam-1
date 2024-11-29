'''(a) Solve the system of linear equations using python by Gauss Jordanmethod. 2 x + y = 7
x + 2 y = 5'''
from sympy import *
A = Matrix([[2,1],[1,2]])
B = Matrix([7,5])
print(A.gauss_jordan_solve(B))

