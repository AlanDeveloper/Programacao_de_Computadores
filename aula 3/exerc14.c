#include <stdio.h>

int main() {
    int temp;
    float cel, far;

    while(1) {
        printf("\nDigite a temperatura em C°: ");
        scanf("%f", &cel);

        far = ((cel / 5) * 9) + 32; 
        printf("Resultado da conversao para Fahrenheit: %.2f", far);

        printf("\nDeseja ler uma nova temperatura? (1.sim2.não)");
        scanf("%d", &temp);
        if(temp == 2) break;
    }

    return 0;
}