from sympy import *
A = Matrix([[1,5],[8,6]])
B = Matrix([[7,4],[3,9]])
A_B = A*B
LHS = A_B.inv()
RHS = B.inv()*A.inv()
print(LHS)
print(RHS)
print("LHS=RHS")
print("(AB)^-1 = B^-1A^-1")