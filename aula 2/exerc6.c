#include <stdio.h>

int main() {
    int n, total = 1, i = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 0;i < n;i++) {
        total *= n - i;
    }
    printf("Resultado: %d", total);
    
    return 0;
}