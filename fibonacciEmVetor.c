#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    long long fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 61; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    while (n--) {
        int x;
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, fib[x]);
    }

    return 0;
}