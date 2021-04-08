#include <stdio.h>

int main() {
    float dividendo, divisor;

    printf("Digite o valor do dividendo: ");
    scanf("%f", &dividendo);
    do {
        printf("Digite o valor do divisor: ");
        scanf("%f", &divisor);

        if(divisor != 0) {
            printf("Resultado: %.2f", dividendo / divisor);
        }

    } while(divisor == 0);

    return 0;
}