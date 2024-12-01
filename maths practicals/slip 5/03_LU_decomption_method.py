from sympy import *
from sympy.abc import x,y,z
AB = Matrix([[6,8,13,3],[2,15,1,19],[4,15,3,0]])
print(solve_linear_system_LU(AB,[x,y,z]))