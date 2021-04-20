#include <stdio.h>

int main() {
    int l = 3, c = 3, i, j, matriz[l][c];

    matriz[0][0] = 0;
    matriz[0][1] = 1;
    matriz[0][2] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;
    matriz[1][2] = 5;
    matriz[2][0] = 6;
    matriz[2][1] = 7;
    matriz[2][2] = 8;

    for(i=0;i < c;i++) {
        for(j=0;j < l;j++) {
            printf("%x ", &matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}