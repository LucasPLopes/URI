def quantidade_litros(hora,vel_media):
    return (hora * vel_media)/12

hora = int(input())
vel_media = int(input())

print("%.3f" % quantidade_litros(hora,vel_media))