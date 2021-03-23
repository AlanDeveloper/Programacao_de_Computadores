#include <stdio.h>

int main() {
    float far, cel;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &far);

    cel = ((far - 32) / 9) * 5;
    printf("Resultado da conversão para celcius %.2f", cel);
    return 0;
}