#include <stdio.h>

int main() {
    float far, cel;

    printf("Digite a temperatura em celcius: ");
    scanf("%f", &cel);

    far = ((cel / 5) * 9) + 32; 
    printf("Resultado da conversão para Fahrenheit %.2f", far);
    return 0;
}