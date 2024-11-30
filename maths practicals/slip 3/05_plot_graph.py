''') Using Python code plot the graph of f(x) = X^2

in [ 0 , 5 ] . x ≥ 0, y ≥ 0'''
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0,5,100)
y = x**2
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("f(x)")
plt.title("graph of f(x) = x^2")
plt.grid(True)
plt.show()
