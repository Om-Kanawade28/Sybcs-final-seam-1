import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0,5,100)
y = x**2
plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("f(x)")
plt.title("Graph of X2")
plt.grid(True)
plt.show()