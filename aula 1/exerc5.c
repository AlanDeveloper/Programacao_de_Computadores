#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;

    printf("Digite o numero de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite o numero de votos validos: ");
    scanf("%d", &validos);

    brancos = (eleitores * brancos) / eleitores;
    printf("Porcentagem de votos brancos: %d%", brancos);
    nulos = (eleitores * nulos) / eleitores;
    printf("\nPorcentagem de votos nulos: %d%", nulos);
    validos = (eleitores * validos) / eleitores;
    printf("\nPorcentagem de votos validos: %d%", validos);
    return 0;
}