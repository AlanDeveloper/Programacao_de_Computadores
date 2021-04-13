#include <stdio.h>

int main() {
    int n = 10, n2 = 5, i, vetorA[n];

    for(i=0;i < n;i++) {
        vetorA[i] = n2;
        n2 += 5;
    }

    for(i=0;i < n;i++) {
        printf("Indice %d: %d\n", i, vetorA[i]);
    }

    return 0;
}