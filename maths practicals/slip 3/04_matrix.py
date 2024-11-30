''') Using Python code construct any three matrices A , B and C to show that
( A + B ) + C = A + ( B + C)'''
from sympy import *
A = Matrix([[1,2],[3,4]])
B = Matrix([[5,6],[7,8]])
C = Matrix([[9,10],[11,12]])
print("(A+B)+C=", (A+B)+C)
print("A+(B+C)=", A+(B+C))

