#include <stdio.h>

int main() {
    int n, n2;

    printf("Digite o numero de lados: ");
    scanf("%d", &n);

    if(n == 3 || n == 4) {
        printf("Digite a medida dos lados: ");
        scanf("%d", &n2);
    }

    if(n == 3) {
        printf("TRIÂNGULO com perimetro de %d", n*n2);
    } else if(n == 4) {
        printf("QUADRADO com perimetro de %d", n*n2);
    } else {
        printf("PENTÁGONO");
    }

    return 0;
}