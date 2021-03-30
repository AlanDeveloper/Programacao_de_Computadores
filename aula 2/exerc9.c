#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0 || n % 3 == 0) {
        printf("O numero e primo!");
    } else {
        printf("O numero nao e primo!");
    }
    
    return 0;
}