import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-5,5,100)
y = 1/x
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("1/x")
plt.title("Graph of 1/x")
plt.grid(True)
plt.show()