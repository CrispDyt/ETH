import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt('data/results.txt')

plt.plot(data[:, 0], data[:, 1])
#plt.show()
plt.savefig('data/convergence.png')
