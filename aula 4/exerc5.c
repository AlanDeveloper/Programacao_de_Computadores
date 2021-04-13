#include <stdio.h>

int main() {
    int n = 10, i, j;
    float vetorA[n], vetorU[n];

    for(i=0;i < n;i++) {
        printf("Digite um valor: ");
        scanf("%f", &vetorA[i]);
    }

    for(i=0,j=n-1;i < n;i++,j--) {
        vetorU[i] = vetorA[j];
    }

    for(i=0;i < n;i++) {
        printf("Valor do vetor U: %.2f\n", vetorU[i]);
    }

    return 0;
}