#include <stdio.h>

#define FUEL 5.99 

int main() {
    float kmInicio, kmFim, km, gaso, dinheiro;

    printf("Informe os km do inicio do dia: ");
    scanf("%f", &kmInicio);
    printf("Informe os km do fim do dia: ");
    scanf("%f", &kmFim);

    printf("Litro(s) em gasolina gasto: ");
    scanf("%f", &gaso);
    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    km = kmFim - kmInicio;

    printf("Consumo medio: %.2f km/L", km / gaso);
    printf("\nLucro liquido: R$ %.2f", dinheiro - (km / gaso) * FUEL);
    return 0;
}