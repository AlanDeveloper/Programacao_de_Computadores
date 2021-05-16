#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2

// EXERCÍCIO NADA CLARO SOBRE A ESTRUTURA QUE QUER E QUAL A RELAÇÃO ENTRE ACERVO-DISCO-CD-MUSICA

typedef struct {
    int id;
    int type;
    float valor;
    char autor[100];
    char album[100];
    char lancamento[100];
    char produtora[100];
    char genero[100];
} CD;

typedef struct {
    int id;
    int faixas;
    CD cds[N];
} Acervo;

int menu(void) {
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir dados do(s) acervo(s)\n");
		printf("\t 2. Inserir dados do(s) CD(s)\n");
		printf("\t 3. Ler acervo(s)\n");
		printf("\t 4. Buscar por album\n");
		printf("\t 5. Buscar por genero\n");
		printf("\t 6. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 6);
	getchar();

	return c;
}

int main() {
    int n, i, j, escolha;
    char pesquisa[100];

    printf("Digite o numero de acervos: ");
    scanf("%d", &n);

    Acervo a[n];

    for (;;) {
		escolha = menu();
		switch (escolha) {
            case 1:
                for(i = 0;i < n;i++) {
                    a[i].id = i;
                    printf("---- Acervo %d:\nDigite o numero de faixas: ", i);
                    scanf("%d", &a[i].faixas);
                }
                break;
            case 2:
                for(i = 0;i < n;i++) {
                    printf("---- Acervo %d:\n", i);
                    for(j = 0;j < N;j++) {
                        CD cd;
                        cd.id = j;
                        printf("-- Disco %d:\n", j);
                        printf("Digite o nome do autor: ");
                        scanf("%s", &cd.autor);
                        printf("Digite o nome do album: ");
                        scanf("%s", &cd.album);
                        printf("Digite o nome do produtora: ");
                        scanf("%s", &cd.produtora);
                        printf("Digite o nome do genero: ");
                        scanf("%s", &cd.genero);
                        printf("Digite a data de lancamento(DD/MM/AAAA): ");
                        scanf("%s", &cd.lancamento);
                        printf("Digite o valor do CD: ");
                        scanf("%f", &cd.valor);
                        printf("- Selecione o tipo de CD:\n\t1 - Single\n\t2 - Double\n\t3 - Box\nDigite sua escolha: ");
                        scanf("%d", &cd.type);

                        a[i].cds[j] = cd;
                    }
                }
            break;
            case 3:
                for(i = 0;i < n;i++) {
                    printf("\n--- Acervo %d", i);
                    printf("\nNumero de faixas: %d", a[i].faixas);
                    for(j = 0;j < N;j++) {
                        printf("\n-- CD %d:", a[i].cds[j].id);
                        printf("\n\tAutor: %s", a[i].cds[j].autor);
                        printf("\n\tAlbum: %s", a[i].cds[j].album);
                        printf("\n\tProdutora: %s", a[i].cds[j].produtora);
                        printf("\n\tGenero: %s", a[i].cds[j].genero);
                        printf("\n\tLancamento: %s", a[i].cds[j].lancamento);
                        printf("\n\tValor R$ %.2f:", a[i].cds[j].valor);
                        if(a[i].cds[j].type == 1) {
                            printf("\n\tTipo: Single\n");
                        }
                        if(a[i].cds[j].type == 2) {
                            printf("\n\tTipo: Double\n");
                        }
                        if(a[i].cds[j].type == 3) {
                            printf("\n\tTipo: Box\n");
                        }
                    }
                }
            break;
            case 4:
                printf("Digite o nome do album: ");
                scanf("%s", pesquisa);

                for(i = 0;i < n;i++) {
                    printf("\n--- Acervo %d", i);
                    for(j = 0;j < N;j++) {
                        if(strcmp(a[i].cds[j].album, pesquisa) == 0) {
                            printf("\n-- CD %d:", a[i].cds[j].id);
                            printf("\n\tAutor: %s", a[i].cds[j].autor);
                            printf("\n\tAlbum: %s", a[i].cds[j].album);
                            printf("\n\tProdutora: %s", a[i].cds[j].produtora);
                            printf("\n\tGenero: %s", a[i].cds[j].genero);
                            printf("\n\tLancamento: %s", a[i].cds[j].lancamento);
                            printf("\n\tValor R$ %.2f:", a[i].cds[j].valor);
                            if(a[i].cds[j].type == 1) {
                                printf("\n\tTipo: Single\n");
                            }
                            if(a[i].cds[j].type == 2) {
                                printf("\n\tTipo: Double\n");
                            }
                            if(a[i].cds[j].type == 3) {
                                printf("\n\tTipo: Box\n");
                            }
                        }
                    }
                }
            break;
            case 5:
                printf("Digite o nome do genero: ");
                scanf("%s", pesquisa);

                for(i = 0;i < n;i++) {
                    for(j = 0;j < N;j++) {
                        if(strcmp(a[i].cds[j].genero, pesquisa) == 0) {
                            printf("\n--- Acervo %d", i);
                            printf("\n-- CD %d:", a[i].cds[j].id);
                            printf("\n\tAutor: %s", a[i].cds[j].autor);
                            printf("\n\tAlbum: %s", a[i].cds[j].album);
                            printf("\n\tProdutora: %s", a[i].cds[j].produtora);
                            printf("\n\tGenero: %s", a[i].cds[j].genero);
                            printf("\n\tLancamento: %s", a[i].cds[j].lancamento);
                            printf("\n\tValor R$ %.2f:", a[i].cds[j].valor);
                            if(a[i].cds[j].type == 1) {
                                printf("\n\tTipo: Single\n");
                            }
                            if(a[i].cds[j].type == 2) {
                                printf("\n\tTipo: Double\n");
                            }
                            if(a[i].cds[j].type == 3) {
                                printf("\n\tTipo: Box\n");
                            }
                        }
                    }
                }
            break;
            case 6:
                exit(0);
            break;
		}
	}
    
    return 0;
}