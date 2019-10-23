def tempo(d):
    return d/((90 / 60.0) - (60 / 60.0))

d = int(input())

print("%d  minutos"% tempo(d))

"""
Solução alternativa

print("%d"% (d*2))
"""