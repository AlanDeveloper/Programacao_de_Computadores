#include <stdio.h>

// 3 A
// int main() {
//     int x, *p;
//     x = 100;
//     p = x;    <-------------------------- ALOCANDO VALOR DE X NA VARIÁVEL P E NÃO O ENDEREÇO DE MEMÓRIA
//     printf("Valor de p: %d.\n", *p);
    
//     return 0;
// }

int main() {
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d.\n", *p);
    
    return 0;
}