#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Valor e par");
    } else {
        printf("Valor e impar");
    }

    return 0;
}