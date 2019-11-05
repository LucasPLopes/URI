from math import floor

valor = abs(int(input()))
entrada = valor

# uso do floor para arrendodamento para baixo
n100 = floor(valor/100)  # quantas notas de 100 precisaremos
valor -= (100 * n100)  # valor = valor - 100 *n100

n50 = floor(valor/50)
valor -= floor((50 * n50))

n20 = floor(valor/20)
valor -= (20 * n20)

n10 = floor(valor/10)
valor -= (10 * n10)

n05 = floor(valor/5)
valor -= (5 * n05)

n02 = floor(valor/2)
valor -= (2 * n02)

n01 = floor(valor/1)
valor -= 1 * n01

print("%d" % entrada)
print("%d nota(s) de R$ 100,00" % n100)
print("%d nota(s) de R$ 50,00" % n50)
print("%d nota(s) de R$ 20,00" % n20)
print("%d nota(s) de R$ 10,00" % n10)
print("%d nota(s) de R$ 5,00" % n05)
print("%d nota(s) de R$ 2,00" % n02)
print("%d nota(s) de R$ 1,00" % n01)
