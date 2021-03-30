#include <stdio.h>

int main() {
    int i, fib1 = 1, fib2 = 1, soma, total = 0, n;    

    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n == 1) {
        total += 1;    
        printf("1\n");     
    } else if(n >= 2) {
        total += 2;    
        printf("1\n1\n");
    }
    for (i = 3; i <= n; i = i + 1) {                                        
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;

        total += soma;
        printf("%d\n", soma);
    }
    printf("Resultado: %d", total);                
    return 0;
}