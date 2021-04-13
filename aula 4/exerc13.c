#include <stdio.h>
#include <string.h>

int main() {
    int i, n = 2;
    char matriz[n][30];

    for(i=0;i < n;i++) {
        printf("Digite uma palavra: ");
        scanf("%s", &matriz[i]);
    }

    for(i=0;i < n;i++) {
        printf("%c %c\n", matriz[i][0], matriz[i][strlen(matriz[i]) -1]);
    }

    return 0;
}