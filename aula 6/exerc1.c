#include <stdio.h>

int fatorial(int n) {
    int i, total = 1;

    for(i = 1; i <= n;i++) {
        total *= i;
    }

    return total;
}

int main() {
    int n;

    printf("Um numero: ");
    scanf("%d", &n);

    printf("Fatorial de %d é %d", n, fatorial(n));

    return 0;
}