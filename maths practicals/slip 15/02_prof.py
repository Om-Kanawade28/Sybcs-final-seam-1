''')Using Python code construct any two matrices A and B to show that
(AB)^ −1 = B ^−1 A^ −1 .'''
from sympy import *
A = Matrix([[1,2],[3,4]])
B = Matrix([[5,6],[7,8]])
print("(AB)^-1 = ",(A*B).inv())
print("B^-1 A^-1 = ",B.inv()*A.inv())
