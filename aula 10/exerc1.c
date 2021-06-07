#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct end
{
  char nome[100];
  char rua[100];
  char cidade[100];
  char estado[100];
  unsigned long int cep;
  struct end *prox;
} info;

int menu(void)
{
  int c = 0;
  do
  {
    printf("-- MENU:\n");
    printf("\t 1. Inserir um nome\n");
    printf("\t 2. Excluir um nome\n");
    printf("\t 3. Listar o arquivo\n");
    printf("\t 4. Sair\n");
    printf("-- Digite sua escolha: ");
    scanf("%d", &c);
  } while (c <= 0 || c > 4);
  getchar();
  return c;
}

info *cria_lista(void)
{
  info *cell;
  cell = (info *)(malloc(sizeof(info)));
  cell->prox = NULL;

  return cell;
}

void ler_string(char palavra[100], int tamanho)
{
	int i = 0;
	char c;

	c = getchar();
	while ((c != '\n') && (i < tamanho)) {
		palavra[i++] = c;
		c = getchar();
	}
	palavra[i] = '\0';

	if (c != '\n') {
		c = getchar();
		while ((c != '\n') && (c != EOF)) {
			c = getchar();
		}
	}
}

int livre(info *ini)
{
	int i;
  info *p;
	for (p = ini->prox, i = 0; p != NULL; p = p->prox, i++)
  {
    if (i == MAX) return -1;
  }
  return i;
}

void insere(info *p)
{
  int posicao;

	posicao = livre(p);
	if (posicao == -1) {
		printf("\nEstrutura Cheia!!\n");
		return;
	}

  info *nova;

  nova = (info *)(malloc(sizeof(info)));

	printf("-- Registro %d:\n", posicao);
	printf("\t Nome: ");
	ler_string(nova->nome, 100);
	printf("\t Rua: ");
	ler_string(nova->rua, 100);
	printf("\t Cidade: ");
	ler_string(nova->cidade, 100);
	printf("\t Estado: ");
	ler_string(nova->estado, 100);
	printf("\t CEP: ");
	scanf("%lu", &nova->cep);

  nova->prox = p->prox;
  p->prox = nova;
}

void imprime(info *ini)
{
	int i;
  info *p;

	for (p = ini->prox, i = 0; p != NULL; p = p->prox, i++)
		if (p->nome[0] != '\0') {
			printf("-- Registro %d:\n", i);
			printf("\t Nome: %s", p->nome);
			printf("\t Rua: %s", p->rua);
			printf("\t Cidade: %s", p->cidade);
			printf("\t Estado: %s", p->estado);
			printf("\t CEP: %lu\n", p->cep);
		}
}

void apaga(info *ini)
{
  int posicao, i;

	printf("Digite o numero do registro: ");
	scanf("%d", &posicao);

  info *p, *j;
  for (p = ini->prox, i = 0; p != NULL; p = p->prox, i++)
  {
    if((posicao - 1) == i)
    {
      for (j = ini->prox, i = 0; j != NULL; j = j->prox, i++)
      {
        if (posicao == i)
        {
          p->prox = j->prox;
        }
      }
    }
  }
  if (posicao == 0)
  {
    ini->prox = NULL;
  }

}

int main()
{
  int escolha;
  info *cell;

  cell = cria_lista();
  for (;;)
  {
    escolha = menu();
    switch (escolha)
    {
    case 1:
      insere(cell);
      break;
    case 2:
      apaga(cell);
      break;
    case 3:
      imprime(cell);
      break;
    case 4:
      exit(0);
      break;
    }
  }

  free(cell);
  return 0;
}