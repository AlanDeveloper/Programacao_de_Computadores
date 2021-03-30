#include <stdio.h>

int main() {
    float v1, v2, mt, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &v1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &v2);
    printf("Digite sua media dos trabalhos: ");
    scanf("%f", &mt);

    media = (3*v1+3*v2+4*mt)/10;

    if(media > 7) {
        printf("Aprovado por media com nota %.2f", media);
    } else {
        printf("Nota necessaria: %.2f", 7 - media);
    }

    return 0;
}