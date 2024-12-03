import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(2,2*np.pi,100)
y = np.sin(x) - 3*np.exp(x) + 3*x**2 + np.log(x)
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.show()