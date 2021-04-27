#include <stdio.h>
#include <stdbool.h>

int withdraw_repetition(float vetor[], int n) {
    int i, j;
    bool copy = 1;
    float vetor2[n];

    for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            if(vetor[i] == vetor2[j]) {
                copy = 0;
            }
        }
        if(copy) {
            vetor2[i] = vetor[i];
        } else {
            vetor2[i] = -99999999;
        }
        copy = 1;
    }

    for(i = 0;i < n;i++) {
        if(vetor2[i] != -99999999) {
            printf("%.2f ", vetor2[i]);
        }
    }
}

int main() {
    int n, i;

    printf("Numero de leituras: ");
    scanf("%d", &n);
    float vetor[n];

    for(i = 0;i < n;i++) {
        printf("Numero decimal: ");
        scanf("%f", &vetor[i]);
    }
    withdraw_repetition(vetor, n);

    return 0;
}