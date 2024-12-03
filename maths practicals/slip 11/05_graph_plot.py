import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-2*np.pi,2*np.pi,100)
y = np.sin(x)
plt.plot(x)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("Sin(x)")
plt.show()