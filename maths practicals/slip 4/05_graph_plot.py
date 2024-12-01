'''(a) Write a Python Code for plotting graph of the function. f(x)= 𝑠in(x) on the interval [ -2π , 2π ]'''
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-2*np.pi,2*np.pi,100)
y = np.sin(x)
plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("f(x)")
plt.title("Graph of f(x) = Sin(x)")
plt.grid(True)
plt.show()