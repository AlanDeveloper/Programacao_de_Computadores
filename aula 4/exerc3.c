#include <stdio.h>

int main() {
    int n = 10, i, vetorA[n];

    for(i=0;i < n;i++) {
        if(i % 2 == 0) {
            vetorA[i] = 30;
        } else {
            vetorA[i] = 15;
        }
    }

    for(i=0;i < n;i++) {
        printf("Indice %d: %d\n", i, vetorA[i]);
    }

    return 0;
}