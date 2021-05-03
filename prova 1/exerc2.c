#include <stdio.h>

int main() {
    int i, n = 10, vetorX[n], vetorY[n], vetorR[n*2];
    
    for (i  = 0; i < n;i++) {
        printf("Digite um valor para o vetor X: ");
        scanf("%d", &vetorX[i]);
    }

    for (i  = 0; i < n;i++) {
        printf("Digite um valor para o vetor Y: ");
        scanf("%d", &vetorY[i]);
    }

    for (i  = 0; i < (n * 2);i++) {
        if(i % 2 == 0) {
            vetorR[i] = vetorX[i / 2];
        } else {
            vetorR[i] = vetorY[i / 2];
        }
    }

    for (i  = 0; i < (n * 2);i++) {
        printf("%d ", vetorR[i]);
    }

    return 0;
}