#include <stdio.h>

int main() {
    int n;

    printf("Digite sua senha: ");
    scanf("%d", &n);

    if(n == 1234) {
        printf("ACESSO PERMITIDO");
    } else {
        printf("ACESSO NEGADO");
    }

    return 0;
}