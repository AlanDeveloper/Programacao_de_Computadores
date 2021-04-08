#include <stdio.h>

int main() {
    int n, n2;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    if(n > n2) {
        printf("Valor %d e maior que %d", n, n2);
    } else {
        printf("Valor %d e maior que %d", n2, n);
    }

    return 0;
}