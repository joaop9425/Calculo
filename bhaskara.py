#!/bin/python

print("="*20)
valor_a = float(input("Digite o valor de A: "))
print("="*20)
valor_b = float(input("Digite o valor de B: "))
print("="*20)
valor_c = float(input("Digite o valor de C: "))
print("="*20)
delta = ((valor_b)**2)-(4*valor_a*valor_c)
if delta < 0:
    raise Exception('Delta < 0 ')
valor_x1 = (-(valor_b)+((delta)**(1/2)))/(2*valor_a)
valor_x2 = (-(valor_b)-((delta)**(1/2)))/(2*valor_a)
valor_xV = -(valor_b)/(2*valor_a)
valor_yV = -(delta)/(4*valor_a)
print("Delta=", delta)
print("="*20)
print("X1=", valor_x1)
print("="*20)
print("X2=", valor_x2)
print("="*20)
print("Xv=", valor_xV)
print("="*20)
print("Yv=", valor_yV)
print("="*20)

import matplotlib.pyplot as plt
import numpy as np
eixo_x = []
eixo_y = []
zero = []

variacao = abs(valor_x1 - valor_x2)
if variacao < 3:
    variacao = 3
print(variacao)

for x in np.arange(valor_x1 - variacao, valor_x2 + variacao, variacao / 100):
    y= valor_a * (x ** 2 ) + valor_b * (x) + valor_c
    eixo_x.append(x)
    eixo_y.append(y)
    zero.append(0.0)
plt.plot(eixo_x,eixo_y,color="blue")
plt.plot(eixo_x,zero,color="black")
plt.show()
