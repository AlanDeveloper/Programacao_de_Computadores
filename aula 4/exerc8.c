#include <stdio.h>

int main() {
    int l, c, i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    int m1[l][c], m2[l][c], s[l][c];
    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("Valor: ");
            scanf("%d", &m1[i][j]);
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("Valor: ");
            scanf("%d", &m2[i][j]);
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}