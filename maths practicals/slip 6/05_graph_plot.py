import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0,10,100)
y = np.log(x)
plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("Y")
plt.title("Graph of Logarithmic function")
plt.show()