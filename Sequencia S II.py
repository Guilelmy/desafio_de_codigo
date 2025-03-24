Numerador = 1
Denominador = 1
soma = 0

while Numerador <= 39:
    soma += Numerador / Denominador
    Numerador += 2
    Denominador *= 2

print(f'{soma:.2f}')