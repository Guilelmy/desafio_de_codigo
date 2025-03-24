while True:
    digito_falho, numero_original = map(str, input().split())
    
    digito_falho = int(digito_falho)
    
    if digito_falho == 0 and numero_original == "0":
        break

    numero_revisado = numero_original.replace(str(digito_falho), "")
    
    numero_revisado = numero_revisado.lstrip("0")
    
    if numero_revisado == "":
        numero_revisado = "0"
    
    print(numero_revisado)
