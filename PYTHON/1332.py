quantidade = int(input())
one = "one"
two = "two"
while(quantidade > 0):
    palavra = input()
    q1= 0
    q2= 0
    if len(palavra) > 3:
        print(3)
    else:
        for i in range(0,len(palavra)):
            if palavra[i] == one[i]:
                q1 = q1 + 1
            if palavra[i] == two[i]:
                q2 = q2 + 1
        if q1> q2:
            print(1)
        else :
            print(2)
    quantidade = quantidade - 1
