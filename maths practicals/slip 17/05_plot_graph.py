import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(2,2*np.pi,100)
y = np.sin(x) - np.exp(x) + 3*x**2 + np.log(x)
plt.plot(x,y)

plt.xlabel("x")
#Text(0.5, 0, 'x')
plt.ylabel("f(x)")
#Text(0, 0.5, 'f(x)')
plt.title("graph of f(x)")
#Text(0.5, 1.0, 'graph of f(x)')
plt.show()
