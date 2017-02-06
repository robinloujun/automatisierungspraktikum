import matplotlib.pyplot as plt
import numpy as np
def tanhp(z):
    return np.tanh(z)
z = np.arange(-7,7,0.1)
phi_z = tanhp(z)
plt.plot(z,phi_z,linewidth=2.5)
plt.axvline(0.0,color = 'k')
plt.axhspan(-1.0,1.0,facecolor='1.0',alpha=1.0,ls='dotted')
plt.axhline(y=0.0,color='k')
plt.yticks([-1.0,0.0,1.0])
plt.ylim(-1.1,1.1)
plt.xlabel('x')
plt.ylabel('$u(x)$')
plt.show()
