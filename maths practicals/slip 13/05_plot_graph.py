import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-5,5,100)
y = 1/x
plt.plot(x,y)
plt.title("Graph of 1/x ")
plt.xlabel("X")
plt.ylabel("f(x) = 1/x ")
plt.show()