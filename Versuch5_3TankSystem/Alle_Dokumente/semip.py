import matplotlib.pyplot as plt

z = [-7,-4,0,4,7]
phi_z = [0,0,0.5,1,1]
plt.plot(z,phi_z,linewidth=2.5)
plt.axvline(0.0,color = 'k')
plt.axhspan(0.0,1.0,facecolor='1.0',alpha=1.0,ls='dotted')
plt.axhline(y=0.0,color='k')
plt.yticks([0.0,1.0])
plt.ylim(-0.1,1.1)
plt.xticks([-4.0,4.0],('-c','c'))
plt.xlabel('x')
plt.ylabel('$u(x)$')
plt.show()
