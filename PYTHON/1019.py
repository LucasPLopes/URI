def tempo(segundos):
    horas = int(segundos / (60*60))
    segundos -= horas * 3600
    minutos = int(segundos / (60))
    segundos -= minutos * 60
    return horas, minutos, segundos # em Python podemos ter multiplos retornos


segundos = int(input())

hh, mm, ss = tempo(segundos) ## hh = horas, mm = minutos, ss = segundos

print("%d:%d:%d" % (hh, mm, ss))
