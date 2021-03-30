#include <stdio.h>

int main() {
    float v1, v2, mt;

    printf("Digite sua primeira nota: ");
    scanf("%f", &v1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &v2);
    printf("Digite sua media dos trabalhos: ");
    scanf("%f", &mt);

    printf("Sua media: %.2f", (3*v1+3*v2+4*mt)/10);

    return 0;
}