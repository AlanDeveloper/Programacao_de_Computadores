#include <stdio.h>

int main() {
    int l, c, i, j, media = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    int matriz[l][c];
    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("Valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            media += matriz[i][j];
        }
        media /= l;
        for(j=0;j < l;j++) {
            if(matriz[i][j] > media) {
                printf("Acima da media - Valor: %d Indice: %d %d\n", matriz[i][j], i, j);
            }
        }
        media = 0;
    }

    return 0;
}