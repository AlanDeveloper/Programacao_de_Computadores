#include <stdio.h>

int main() {
    int n, n2, n3;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    printf("Digite um numero: ");
    scanf("%d", &n3);

    if(n > n2) {
        if(n > n3) {
            printf("Maior valor e: %d", n);
        } else {
            printf("Maior valor e: %d", n3);
        }
    } else {
        if(n2 > n3) {
            printf("Maior valor e: %d", n2);
        } else {
            printf("Maior valor e: %d", n3);
        }
    }

    return 0;
}