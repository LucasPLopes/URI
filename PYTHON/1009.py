def calc(base,vendas):
    return base + vendas*.15

nome = input()
base = float(input())
vendas = float(input())

total = calc(base,vendas)

print('TOTAL = R$ %.2f' % total)