''') For matrix A = [10 2 3  12 -7 15  -15 10 -11] find transpose,determinant and
inverse if it exists'''
from sympy import *
A = Matrix([[10,2,3],[12,-7,15],[-15,10,-11]])
print("Transponse=",A.T)
print("Determinat=",A.det())
print("Inverse=",A.inv())