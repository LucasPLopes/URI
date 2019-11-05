def consumo(km,lt):
    return km/lt

km = int(input())
lt = float(input())

rendimento = consumo(km,lt)

print("%.3f km/l" % rendimento)
