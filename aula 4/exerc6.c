#include <stdio.h>

int main() {
    int l, c, i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    float matriz[l][c], matrizT[l][c];
    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("Valor: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            matrizT[j][i] = matriz[i][j];
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("%.2f ", matrizT[i][j]);
        }
        printf("\n");
    }

    return 0;
}