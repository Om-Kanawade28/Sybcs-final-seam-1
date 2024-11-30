''') Using Python construct the following matrices.
(i) An identity matrix of order 10 × 10. 
(ii) Zero matrix of order 7 × 3. 
(iii) Ones matrix of order 5 × 4 .'''
from sympy import *
#(i) An identity matrix of order 10 × 10. 
print(eye(10))
#(ii) Zero matrix of order 7 × 3. 
print(zeros(7,3))
#(iii) Ones matrix of order 5 × 4 
print(ones(5,4))