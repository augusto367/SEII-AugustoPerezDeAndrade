import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

x = [1, 2, 3]  #Definindo as coordenadas x e y
y = [2, 4, 6]

plt.plot(x,y, 'b^--', label = '2x')  #Comando para plotar o gráfico

x2 = np.arange(0,4.5,0.4)     #Definindo a coordenada x2
plt.plot(x2, x2**2)       #Comando para plotar o segundo gráfico

plt.title('Primeiro gráfico', fontdict = {'fontname':'Comic Sans MS', 'fontsize':20})       #Titulo
plt.xlabel('Eixo X')    #Legenda dos eixos
plt.ylabel('Eixo Y')

plt.xticks([0,1,2,3,4,5])
plt.yticks([0,2,4,6,8,10])

plt.legend()
plt.show()
