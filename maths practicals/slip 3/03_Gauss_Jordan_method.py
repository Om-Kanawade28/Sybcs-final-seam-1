''') Solve the system of linear equations using python by Gauss Jordan method
x + 2y + 3z = 3
4x + 5y + 6z = 6
7x + 8y + 10z = 9'''
from sympy import *
A = Matrix([[1,2,3],[4,5,6],[7,8,10]])
B = Matrix([3,6,9])
print(A.gauss_jordan_solve(B))
