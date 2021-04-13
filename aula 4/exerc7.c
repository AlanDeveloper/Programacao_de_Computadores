#include <stdio.h>

int main() {
    int n = 5, i, j, matriz[n][n];

    for(i=0;i < n;i++) {
        for(j=0;j < n;j++) {
            printf("Valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i < n;i++) {
        for(j=0;j < n;j++) {
            if(j % 2 == 0 && j != 4) matriz[i][j] = matriz[i][j + 1];
        }
    }

    for(i=0;i < n;i++) {
        for(j=0;j < n;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}