#include <stdio.h>

int main() {
    int n;

    while(1) {
        printf("\nDigite sua senha: ");
        scanf("%d", &n);

        if(n == 2021) {
            printf("ACESSO PERMITIDO");
            break;
        } else {
            printf("“SENHA INVÁLIDA");
        }
    }

    return 0;
}