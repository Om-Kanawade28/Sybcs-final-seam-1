'''se python to accept the matrix A=[1 2 3  2 3 5  1 0 8]. Find the transpose of the matrix, determinant, inverse of the matrix. Also reduce the matrix to reduced row echelon
form and diagonalize it.'''
from sympy import *
A = Matrix([[1,2,3],[2,3,5],[1,0,8]])
#transpose
print("transpose====",A.T)
print("Determinat====",A.det())
print("Inverse ====",A.inv())
print("reduced row echelon===",A.rref())
print("diagonalize")
P,D = A.diagonalize()
print("P==",P)
print("D==",D)