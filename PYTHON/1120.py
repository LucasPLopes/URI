

while(True):
    chave, entrada = input().split(" ")
    if chave == "0" and entrada == "0":
        break
    else:
        resposta = entrada.replace(chave, "")
        if resposta == "":
            print(0)
        else:
            print(int(resposta))
