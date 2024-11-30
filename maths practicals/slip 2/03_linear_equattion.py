'''Using linsolve command in python, solve the following system of linear equations
Comment on the type of solution. 3x + 2y - z = 3
2x - 2y + 4z = 6
2x - y +2z = 9'''
from sympy import *
x,y,z = symbols("x,y,z")
A = Matrix([[3,2,-1],[2,-2,4],[2,-1,2]])
b = Matrix([3,6,9])
print(linsolve((A,b),[x,y,z]))