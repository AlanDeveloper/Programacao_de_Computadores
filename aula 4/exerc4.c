#include <stdio.h>

int main() {
    int n = 15, n2 = 0, i;
    float vetorA[n], x;

    for(i=0;i < n;i++) {
        printf("Digite um valor: ");
        scanf("%f", &vetorA[i]);
    }

    printf("Digite um valor x: ");
    scanf("%f", &x);
    for(i=0;i < n;i++) {
        if(vetorA[i] == x) {
            printf("Indice %d: %.2f\n", i, vetorA[i]);
            n2++;
        }
    }
    printf("Valor x apareceu %d vezes", n2);

    return 0;
}