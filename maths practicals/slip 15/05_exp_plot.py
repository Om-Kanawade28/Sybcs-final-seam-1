'''ite a Python Code for plotting graph of the function. f(x) = 𝑠(x)− e^x+3*x^2 +log(x)

on[2,2pi] '''
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(2,2*np.pi,100)
y = np.sin(x) - np.exp(x) + 3*x**2 + np.log(x)
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("graph of f(x)")
plt.show()
