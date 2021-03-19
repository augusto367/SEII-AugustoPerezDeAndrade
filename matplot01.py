import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

x = [1, 2, 3]
y = [2, 4, 6]

plt.plot(x,y, 'b^--', label = '2x')

x2 = np.arange(0,4.5,0.4)
plt.plot(x2, x2**2)

plt.title('Primeiro gráfico', fontdict = {'fontname':'Comic Sans MS', 'fontsize':20})
plt.xlabel('Eixo X')
plt.ylabel('Eixo Y')

plt.xticks([0,1,2,3,4,5])
plt.yticks([0,2,4,6,8,10])

plt.legend()
plt.show()