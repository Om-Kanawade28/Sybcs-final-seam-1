'''(a) Write a Python Code for plotting graph of the function. f(x) = 𝑠in(x)− e^x + 3x^2 + log (x) on the interval [ 2 , 2π]'''
import numpy as np
import matplotlib.pyplot as plt
x = np.linspace(2, 2*np.pi, 100)
y = np.sin(x) - np.exp(x) + 3*x**2 + np.log(x)
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("Graph of f(x) = sin(x) - e^x + 3x^2 + log(x)")
plt.grid(True)
plt.show()
