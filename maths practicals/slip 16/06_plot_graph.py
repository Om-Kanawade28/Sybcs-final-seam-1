import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-2*np.pi,2*np.pi,100)
y = np.sin(x)
z = np.cos(x)
plt.plot(x,y,label="f(x) = sin(x)")
plt.plot(x,z,label="g(x)=cox(x)")
plt.xlabel("X")

plt.title("graph of f(x) and g(x)")
plt.show()