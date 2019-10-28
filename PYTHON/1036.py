def r1(a, b, c):
    delta = (b*b)+(-4*a*c)
    return (-b + (delta ** .5)) / (2.0*a)


def r2(a, b, c):
    delta = (b*b)+(-4*a*c)
    return (-b - (delta ** .5)) / (2.0*a)


a, b, c = map(float, input().split())
delta = (b*b)+(-4*a*c)

if delta <= 0.0 or a == 0.0:
    print("Impossivel calcular")
else:
    r1 = r1(a, b, c)
    r2 = r2(a, b, c)
    print("R1 = %.5lf" % r1)
    print("R2 = %.5lf" % r2)
