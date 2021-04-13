#include <stdio.h>

int main() {
    int n = 10, i;
    float vetor[n];

    for(i=0;i < n;i++) {
        vetor[i] = 7.5;
    }

    for(i=0;i < n;i++) {
        printf("Indice %d: %.2f\n", i, vetor[i]);
    }

    return 0;
}