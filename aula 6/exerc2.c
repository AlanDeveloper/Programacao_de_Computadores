#include <stdio.h>

char* primo(int n) {
    
    if(n % 2 == 0) {
        return "primo";
    } else {
        return "não é primo";
    }
}

int main() {
    int n;

    printf("Um numero: ");
    scanf("%d", &n);

    printf("O numero %d é %s", n, primo(n));

    return 0;
}