n = int(input())
fibbo = [0, 1]
for __ in range (n):
    valor = int(input())
    while len(fibbo) <= valor:
        fibbo.append(fibbo[-1] + fibbo[-2])
    print(f"Fib({valor}) = {fibbo[valor]}")