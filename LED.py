leds_por_numero = {
    '0': 6,
    '1': 2,
    '2': 5,
    '3': 5,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 3,
    '8': 7,
    '9': 6
}

n = int(input())

for _ in range(n):
    valor = input()  
    total_leds = sum(leds_por_numero[d] for d in valor)  
    print(f"{total_leds} leds")