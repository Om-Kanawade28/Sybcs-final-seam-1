''' Write a Python program to plot 2D graph of the function f ( x ) = sin( x )
and g(x) = cos(x)'''
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-1*np.pi,2*np.pi,100)
y = np.sin(x)
z = np.cos(x)
plt.plot(x,y,label="f(x)")
plt.plot(x,z,label="g(x)")
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("graph of f(x) and g(x)")
plt.grid(True)
plt.show()