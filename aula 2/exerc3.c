#include <stdio.h>

int main() {
    int x, y, n, i = 0;
    int origem = 0, eixoX = 0, eixoY = 0, q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    printf("Numero de pontos a ser lido: ");
    scanf("%d", &n);
    for(i = 0;i < n; i++) {
        printf("Ponto X: ");
        scanf("%d", &x);
        printf("Ponto Y: ");
        scanf("%d", &y);

        if(x == 0 && y == 0) {
            origem++;
        } else {
            if(x == 0) eixoX++;
            if(y == 0) eixoY++;
        }

        if(x > 0 && y > 0) q1++;
        if(x < 0 && y > 0) q2++;
        if(x < 0 && y < 0) q3++;
        if(x > 0 && y < 0) q4++;
    }

    printf("\n\nOrigem: %d\nEixo X: %d\nEixo Y: %d", origem, eixoX, eixoY);
    printf("\nQuadrante 1: %d\nQuadrante 2: %d\nQuadrante 3: %d\nQuadrante 4: %d", q1, q2, q3, q4);
    return 0;
}