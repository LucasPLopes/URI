input = float(input())

if(input >= 0 and input <= 25):
    print("Intervalo [0,25]")
elif(input > 25 and input <= 50):
    print("Intervalo (25,50]")
elif(input > 50 and input <= 75):
    print("Intervalo (50,75]")
elif(input > 75 and input <= 100):
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")
