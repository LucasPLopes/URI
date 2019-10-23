def soma(a,b):
    return a + b

#leitura
n1 = int(input()) #toda leitura do input é string
n2 = int(input()) #por isso precisamos fazer o parser
                  # "1" => 1

s = soma(n1,n2)

print("X =",s)
