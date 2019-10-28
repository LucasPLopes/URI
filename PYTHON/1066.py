
par = 0
impar = 0
positivo = 0
negativo = 0


for i in range(0, 5):
    valor = 0 
    valor = int(input())
    if valor > 0 :
        positivo = positivo + 1
    if valor % 2 == 0:
        par = par + 1
    if valor < 0 :
        negativo = negativo + 1
    if valor %2 == 1:
        impar = impar + 1

print("%d valor(es) par(es)" % par)
print("%d valor(es) impar(es)" % impar)
print("%d valor(es) positivo(s)" % positivo)
print("%d valor(es) negativo(s)" % negativo)
