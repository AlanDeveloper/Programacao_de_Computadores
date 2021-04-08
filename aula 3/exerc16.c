#include <stdio.h>

int main() {
    int aluno;
    float n, n2;

    while(1) {
        printf("\nDigite a primeira nota: ");
        scanf("%f", &n);

        if(n < 0) break;

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        printf("Media: %.2f", (n + n2) / 2);

        printf("\nOutro aluno(1.sim 2.não)?");
        scanf("%d", &aluno);

        if(aluno != 1) break;
    }

    return 0;
}