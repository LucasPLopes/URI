def maiorAB(a,b):
    return (a + b + abs(a-b))/2
a,b,c = map(int,input().split())

maior = maiorAB(a,b)
maior = maiorAB(maior,c)


print("%d eh o maior" % maior)