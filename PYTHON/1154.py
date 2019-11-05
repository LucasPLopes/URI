idade = 0
soma = 0
qnt = 0

while(idade >= 0):
    idade = int(input())
    soma += idade
    qnt += 1
    if idade < 0:
        soma += abs(idade)
        qnt -= 1
        break


media = float(soma)/qnt
print("%.2f" % media)
