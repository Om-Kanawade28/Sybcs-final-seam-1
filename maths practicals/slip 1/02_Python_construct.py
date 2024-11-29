'''(b) Using Python construct the following matrices. i) An identity matrix of order 10 × 10. ii) Zero matrix of order 7 × 3. iii) Ones matrix of order 5 × 4 .'''
import numpy as np

identity_matrix = np.identity(10)
zero_matrix = np.zeros((7, 3))
ones_matrix = np.ones((5, 4))

print("Identity Matrix:\n", identity_matrix)
print("\nZero Matrix:\n", zero_matrix)
print("\nOnes Matrix:\n", ones_matrix)
