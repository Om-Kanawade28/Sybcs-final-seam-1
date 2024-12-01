'''(a) Using linsolve command in python, solve the following system of linear equations
Comment on the type of solution. 
7x + 6y - 8z = 3
7x - 2y + 2z = 0
6x - y - 2z = 9'''
from sympy import *
x,y,z = symbols("x,y,z")
A = Matrix([[7,6,-8],[7,-2,2],[6,-1,-2]])
b = Matrix([3,0,9])
print(linsolve((A,b),[x,y,z]))
