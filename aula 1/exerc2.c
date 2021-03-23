#include <stdio.h>

int main() {
    float salario, reajuste, novosalario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite seu reajuste: ");
    scanf("%f", &reajuste);

    novosalario = (salario * reajuste) / 100 + salario;
    printf("Novo salario: %.2f", novosalario);
    return 0;
}