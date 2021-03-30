#include <stdio.h>

int main() {
    int n, total = 1, i = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(i < n) {
        total *= n - i;
        i++;
    }
    printf("Resultado: %d", total);
    
    return 0;
}