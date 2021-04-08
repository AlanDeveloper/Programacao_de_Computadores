#include <stdio.h>

int main() {
    int n, n2, n3, i;

    printf("Digite o numero de duplas de numeros a serem lidos: ");
    scanf("%d", &n);

    for(i = 0; i < n;i++) {

        printf("Digite um numero: ");
        scanf("%d", &n2);
        printf("Digite um numero: ");
        scanf("%d", &n3);

        if(n2 == n3) break;

        if(n2 < n3) {
            printf("Ordem crescente\n");
        } else {
            printf("Ordem decrescente\n");
        }
    }

    return 0;
}