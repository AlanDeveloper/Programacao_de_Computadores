#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>

typedef struct {
    int id;
    char nome[100];
    float x;
    float y;
    float raio;
} Escola;

typedef struct {
    int id;
    char nomeEscola[100];
    char nome[100];
    float x;
    float y;
} Aluno;

int menu(void) {
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir informacoes da(s) escola(s)\n");
		printf("\t 2. Inserir informacoes do(s) aluno(s)\n");
		printf("\t 3. Listar informacoes da(s) escola(s)\n");
		printf("\t 4. Listar informacoes do(s) aluno(s)\n");
		printf("\t 5. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 5);
	getchar();

	return c;
}

int main() {
    int n, n2, i, j, count, dist, calc, escolha;

    printf("Digite o numero de escolas: ");
    scanf("%d", &n);
    printf("Digite o numero de alunos: ");
    scanf("%d", &n2);

    Escola e[n];
    Aluno a[n2];

    for (;;) {
		escolha = menu();
		switch (escolha) {
            case 1:
                for(i = 0;i < n;i++) {
                    printf("Digite o nome da escola: ");
                    scanf("%s", &e[i].nome);

                    printf("Coordenada X: ");
                    scanf("%f", &e[i].x);

                    printf("Coordenada Y: ");
                    scanf("%f", &e[i].y);

                    printf("Raio de abrangencia: ");
                    scanf("%f", &e[i].raio);
                    e[i].id = i;
                }
            break;
            case 2:
                for(i = 0;i < n2;i++) {
                    printf("Digite o nome do aluno: ");
                    scanf("%s", &a[i].nome);

                    printf("Coordenada X: ");
                    scanf("%f", &a[i].x);

                    printf("Coordenada Y: ");
                    scanf("%f", &a[i].y);

                    printf("Escola(s) que abrangem o aluno: \n");
                    for(j = 0, count = 0, dist = 999999;j < n;j++) {
                        calc = sqrt(pow(a[i].x - e[j].x, 2) + pow(a[i].y - e[j].y, 2));
                        if(calc <= e[j].raio) {
                            printf("- %s\n", e[j].nome);
                            count++;
                        }
                        if(calc < dist) {
                            strcpy(a[i].nomeEscola, e[j].nome);
                            dist = calc;
                        }
                    }
                    if(count == 0) {
                        printf("Nenhuma escola abrange o aluno!\n");
                    }
                    printf("Escola selecionada e mais proxima ao aluno: %s\n", a[i].nomeEscola);

                    a[i].id = i;
                }
            break;
            case 3:
                for(i = 0;i < n;i++) {
                    printf("Nome da escola: %s\n", e[i].nome);
                    printf("Coordenada X: %.2f\n", e[i].x);
                    printf("Coordenada Y: %.2f\n", e[i].y);
                    printf("Raio de abrangencia: %.2f\n", e[i].raio);
                }
            break;
            case 4:
                for(i = 0;i < n2;i++) {
                    printf("Nome do aluno: %s\n", a[i].nome);
                    printf("Nome da escola: %s\n", a[i].nomeEscola);
                    printf("Coordenada X: %.2f\n", a[i].x);
                    printf("Coordenada Y: %.2f\n", a[i].y);
                }
            break;
            case 5:
                exit(0);
            break;
		}
	}
    
    return 0;
}