import matplotlib.pyplot as plt 
import numpy as np
x = np.linspace(-1,1,100)
y = np.arcsin(x)
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x) = sin^-1(x)")
plt.title("graph of f(x) = sin^-1(x) ")
plt.show()