
import matplotlib.pyplot as plt
import numpy as np
import math 
x = np.linspace(-1,1,100)
y = np.arcsin(x)
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("graph of sin^-1(x)")
plt.show()
