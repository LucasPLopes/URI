from math import floor


def tempo(dias):
    ano = floor(dias/365)
    dias -= ano * 365
    mes = floor(dias/30)
    dias -= mes * 30
    return ano, mes, dias


dias = int(input())

a, m, d = tempo(dias)


print("%d ano(s)" % a)
print("%d mes(es)" % m)
print("%d dia(s)" % d)
