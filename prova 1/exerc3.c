#include <stdio.h>

int main() {
    int i, j, n = 2, matriz[n][n], diagonal = 1;

    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            printf("Digite um valor para matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0;i < n;i++) {
        diagonal *= matriz[i][i];
    }

    for (i = n - 1;;) {
        for (j = 0;j < n;j++) {
            matriz[i][j] = diagonal;
        }
        break;
    }
    
    printf("Diagonal: %d\n", diagonal);
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}