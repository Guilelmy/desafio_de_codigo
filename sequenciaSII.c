#include <stdio.h>


int main() {
    float soma = 0, numerador = 1, denominador = 1;
    while (numerador <= 39) {
        soma += numerador / denominador;
        numerador += 2;
        denominador *= 2;
    }
    printf("%.2f\n", soma);

    return 0;
}