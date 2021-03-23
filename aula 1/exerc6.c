#include <stdio.h>

int main() {
    int turmaC = 60, turmaD = 20, reprovadosC, reprovadosD, numreprovadosC, numreprovadosD, aprovadosD;

    printf("Percentual de alunos reprovados da turma C: ");
    scanf("%d", &reprovadosC);
    printf("Percentual de alunos aprovados da turma D: ");
    scanf("%d", &aprovadosD);

    reprovadosD = 100 - aprovadosD;
    numreprovadosC = (turmaC * reprovadosC) / 100;
    numreprovadosD = (turmaD * reprovadosD) / 100;

    printf("Numero de alunos reprovados da turma C: %d", numreprovadosC);
    printf("\nNumero de alunos reprovados da turma D: %d", numreprovadosD);
    printf("\nTotal de alunos reprovados: %d", ((numreprovadosC + numreprovadosD) * 100) / (turmaC + turmaD));
    return 0;
}