ent1 = input().split(' ')
ent2 = input().split(' ')

c1, q1, v1 = ent1   # quebramos o [] em elementos e atribuimos
c2, q2, v2 = ent2   #lembrando que são string 

#realizamos o parser e o calculo
soma = int(q1)*(float(v1)) + int(q2)*(float(v2))

print('VALOR A PAGAR: R$ %.2f' %soma)