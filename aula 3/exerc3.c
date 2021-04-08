#include <stdio.h>

int main() {
    int n, n2;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    if(n > n2) {
        printf("%d %d", n2, n);
    } else {
        printf("%d %d", n, n2);
    }

    return 0;
}