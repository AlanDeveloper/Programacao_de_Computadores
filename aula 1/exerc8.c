#include <stdio.h>

int main() {
    int emp, bic;
    float salario, custo, salario_final, lucro;

    printf("Numero de empregados: ");
    scanf("%d", &emp);
    printf("Valor do salario minimo: ");
    scanf("%f", &salario);
    printf("Custo de producao: ");
    scanf("%f", &custo);
    printf("Numero de bicicletas vendidas: ");
    scanf("%d", &bic);

    custo = custo + (custo * 0.5);
    salario_final = salario + ((bic/emp) * custo * 0.15);
    lucro = (custo * bic) - emp * salario_final * 2;

    printf("Salario minimo: %.2f", salario_final);
    printf("\nLucro liquido: %.2f", lucro);

    return 0;
}