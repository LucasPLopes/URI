contador = 0
for i in range(0, 6):
    ent = float(input())
    if ent >= 0:
        contador = contador + 1
print("%d valores positivos"% contador)