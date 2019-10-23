"""
 Como no Python não há constantes
 criamos uma função que retorna o valor constante
"""
def pi():  
    return 3.14159

# Potência em python  a ^ b => a **b    ex.: 2 ** 3 == 8
def area(v):
    return 4/3.0 *pi() * v ** 3   

v = float(input())

volume = area(v)

print ("VOLUME = %.3f"% volume)