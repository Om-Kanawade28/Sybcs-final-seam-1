'''For the A = [1 2 3  4 5 6  7 8 9] find nullspace ,Coloumnspace and rank of the matrix
that span matrix A'''
from sympy import *
A = Matrix([[1,2,3],[3,4,5],[7,8,9]])
print("Nullspace=",A.nullspace())
print("coloumnspace=",A.columnspace())
print("Rank=",A.rank())