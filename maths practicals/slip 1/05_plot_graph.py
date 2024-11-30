'''Write a python code for plotting graph of the function
f(x)= 𝐶os(x)on the interval [0, 2π]'''
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0,2*np.pi,100)
y = np.cos(x)
plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("Cos(x)")
plt.title("Graph of Cos(x)")
plt.grid(True)
plt.show()
