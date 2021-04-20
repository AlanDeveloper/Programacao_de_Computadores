#include <stdio.h>

int main() {
    float vet[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; // DECLARA E ALOCA VALORES NO VETOR
    float *f; // DECLARA UM PONTEIRO
    int i; // DECLARA UM INTEIRO
    f = vet; // ATRIBUI A F O VETOR

    printf("contador/valor/valor/endereco/endereco");
    for (i = 0; i <= 4; i++) {
        printf("\ni = %d", i); // IMPRIME O ÍNDICE
        printf(" vet[%d] = %.1f", i, vet[i]); // IMPRIME O VALOR DA POSIÇÃO
        printf(" *(f + %d) = %.1f", i, *(f + i)); // IMPRIME A POSIÇÃO DO VETOR, NO CASO F + I É IGUAL A F[I]
        printf(" &vet[%d] = %p", i, &vet[i]); // IMPRIME O ENDEREÇO DE MEMÓRIA DE CADA POSIÇÃO DO VETOR
        printf(" (f + %d) = %p", i, f + i); // IMPRIME O ENDEREÇO DE MEMÓRIA DE CADA POSIÇÃO DE F QUE NO CASO É O MESMO QUE O DO VETOR
    }
    return 0;
}

// SAÍDA NO CONSOLE

// contador/valor/valor/endereco/endereco
// i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 0061FF04 (f + 0) = 0061FF04
// i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 0061FF08 (f + 1) = 0061FF08
// i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 0061FF0C (f + 2) = 0061FF0C
// i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 0061FF10 (f + 3) = 0061FF10
// i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 0061FF14 (f + 4) = 0061FF14