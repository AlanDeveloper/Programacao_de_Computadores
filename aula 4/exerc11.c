#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int matriz[n][n];
    for(i=0;i < n;i++) {
        for(j=0;j < n;j++) {
            m = (i + j + 1) % n;
            if(m == 0) m = n;
            matriz[i][j] = m;
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