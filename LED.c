#include <stdio.h>
#include <string.h>

int main() {
    int ledsPorNumero[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int n; 
    scanf("%d", &n); 

    while (n--) {
        char valor[10100]; 
        scanf("%s", valor); 

        int totalLeds = 0;

       
        for (int i = 0; i < strlen(valor); i++) {
            totalLeds += ledsPorNumero[valor[i] - '0'];
        }

        printf("%d leds\n", totalLeds);
    }

    return 0;
}
