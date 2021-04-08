#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n > 0) {
            printf("Valor positivo\n");
        } else {
            printf("Valor negativo\n");
        }
    } while(n != 0);

    return 0;
}   