
while(True):
    q1,q2 = map(int, input().split())
    if q1 == 0 or q2 ==0:
        break
    if q1>0 and q2>0:
        print("primeiro")
    if q1>0 and q2<0:
        print("quarto")
    if q1<0 and q2<0:
       print("terceiro")
    if q1<0 and q2>0:
        print("segundo")