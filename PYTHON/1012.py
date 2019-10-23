def triangulo_retangulo(a,c):
    return (a*c) / 2

def circulo(c):
    return c * c * 3.14159

def trapezio(a,b,c):
    area = (a + b)*c
    area /= 2
    return area

def quadrado(b):
    return b ** 2

def retangulo(a,b):
    return a * b

a,b,c = map(float, input().split())

print ("TRIANGULO: %.3f" % triangulo_retangulo(a,c))
print ("CIRCULO: %.3f" % circulo(c))
print ("TRAPEZIO: %.3f" % trapezio(a,b,c))
print ("QUADRADO: %.3f" % quadrado(b))
print ("RETANGULO: %.3f" % retangulo(a,b))


