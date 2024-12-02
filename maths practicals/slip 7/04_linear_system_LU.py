from sympy import *
from sympy.abc import x,y,z
AB = Matrix([[3,-7,-2,-7],[-3,5,1,5],[6,-4,0,2]])

print(solve_linear_system_LU(AB,[x,y,z]))