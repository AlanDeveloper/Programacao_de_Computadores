#include <stdio.h>

int main() {
    int l, c, i, j, total = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    int matriz[l][c], elem = l - 1;
    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("Valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            if(elem == j) {
                total += matriz[i][j];
                elem--;
            }
        }
    }

    total /= l;

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            if(matriz[i][j] < total) {
                printf("Indice: %d %d\n", i, j);
            }
        }
    }

    return 0;
}