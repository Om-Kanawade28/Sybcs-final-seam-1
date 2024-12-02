'''Find order, type, determinant and inverse of matri a = [1 2 3  4 5 6  7 8 9]'''
from sympy import *
A = Matrix([[1,2,3],[4,5,6],[7,8,9]])
print("Order=",A.shape)
print("Type=",type(A))
print("Determinant=",A.det())
#print("Inverse=",A.inv())
