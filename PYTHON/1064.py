contador = 0
somador = 0
for i in range(0, 6):
    ent = float(input())
    if ent >= 0:
        contador = contador + 1
        somador = somador + ent
print("%d valores positivos"% contador)
print(somador/contador)