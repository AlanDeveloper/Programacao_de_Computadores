#include <stdio.h>

int main() {
    int n, n2, operacao;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    printf("Digite sua operacao:\n\n1.Adição\n2.Subtração\n3.Divisão\n4.Multiplicação: ");
    scanf("%d", &operacao);

    if(operacao == 1) {
        printf("Resultado: %d", n + n2);
    } else if(operacao == 2) {
        printf("Resultado: %d", n - n2);
    } else if(operacao == 3) {
        printf("Resultado: %d", n / n2);
    } else if(operacao == 4) {
        printf("Resultado: %d", n * n2);
    }

    return 0;
}