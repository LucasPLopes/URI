quantidade = int(input())
g = 0
v = 0 
while(quantidade >0):
    entrada  = input()
    if entrada[0] == 'G':
        g = g + int(entrada[2:])
        # g = g + int(entrada.slice(2,entrada.size()))
    elif entrada[0] == 'V':
        v = v + int(entrada[2:])
    quantidade = quantidade - 1 
if g >= v:
    print("NAO VAI TER CORTE, VAI TER LUTA!")
else:
    print("A greve vai parar.")