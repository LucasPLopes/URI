def distancia(x1,y1,x2,y2):
    calc = (x2 -x1) ** 2 + (y2 -y1) ** 2
    return calc ** .5

x1,y1 = map(float,input().split())
x2,y2 = map(float,input().split())

resultado = distancia(x1,y1,x2,y2)
print("%.4f" % resultado)
