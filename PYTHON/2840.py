def areabalao(r,pi):
    return (4/3)*(pi*r**3)

r, litros = map(int,input().split())

quantidade = 0
quantidade = litros // areabalao(r, 3.14159)

print(int(quantidade))