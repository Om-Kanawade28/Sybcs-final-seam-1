import sympy
from sympy import Matrix

A = Matrix([[1,0,5],[2,1,6],[3,4,0]])
B = Matrix([[2,5],[-1,4]])

try:
    print("A + B=",A + B)
    print("A - B=",A - B)
except (ValueError, TypeError) as e:
    print(f"Error: {e}")

print("Inverse of A=",A.inv())
print("Determinant of A=",A.det())
print("Inverse of B=",B.inv())
print("Determinant of B=",B.det())