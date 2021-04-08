#include <stdio.h>

int main() {
    float dividendo, divisor;

    printf("Digite o valor do dividendo: ");
    scanf("%f", &dividendo);
    while(1) {
        printf("Digite o valor do divisor: ");
        scanf("%f", &divisor);

        if(divisor != 0) {
            printf("Resultado: %.2f", dividendo / divisor);
            break;
        }

    };

    return 0;
}