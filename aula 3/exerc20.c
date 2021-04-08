#include <stdio.h>

int main() {
    int n, s = 0, inicio = -1;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    while(n != 0) {
        inicio += 2;
        s += inicio; 
        n--;
    }

    printf("Resultado: %d", s);

    return 0;
}