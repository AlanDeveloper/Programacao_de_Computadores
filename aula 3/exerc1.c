#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n >= 0) {
        printf("Valor positivo");
    } else {
        printf("Valor negativo");
    }

    return 0;
}