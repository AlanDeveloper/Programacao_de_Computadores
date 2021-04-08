#include <stdio.h>

int main() {
    int n, n2, i;

    printf("Digite o numero de numeros a serem lidos: ");
    scanf("%d", &n);

    for(i = 0; i < n;i++) {

        printf("Digite um numero: ");
        scanf("%d", &n2);

        if(n2 < 0) break;

        if(n2 % 2 == 0) {
            printf("Valor e par\n");
        } else {
            printf("Valor e impar\n");
        }
    }

    return 0;
}