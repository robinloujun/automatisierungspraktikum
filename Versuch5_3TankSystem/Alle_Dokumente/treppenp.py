import matplotlib.pyplot as plt
z = [-7,0,7]
phi_z = [-1,-1,1]
plt.step(z,phi_z,linewidth=2.5)
plt.axvline(0.0,color = 'k')
plt.axhspan(0.0,1.0,facecolor='1.0',alpha=1.0,ls='dotted')
plt.axhline(y=0,color='k')
plt.yticks([-1.0,0,1.0])
plt.ylim(-1.1,1.1)
plt.xlabel('x')
plt.ylabel('$u(x)$')
plt.show()
