#include <stdio.h>

#define PI 3.14159265359

int main() {
    float raio, area;

    printf("Digite o valor do raio: ");
	scanf("%f", &raio);

    area = raio * raio * PI;
    printf("Area do circulo: %.2f", area);

    return 0;
}