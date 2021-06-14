#include <stdio.h>
#include <stdlib.h>

typedef struct end
{
  int cpf[11];
  int nro_candidato;
  struct end *prox;
} eleitor;

eleitor *cria_lista(void)
{
  eleitor *cell = NULL;
  cell = (eleitor *)(malloc(sizeof(eleitor)));
  if (cell == NULL) {
		printf("\nErro ao alocar memoria!");
		exit(1);
	}
  cell->prox = NULL;

  return cell;
}

int menu(void)
{
  int c = 0;
  do
  {
    printf("-- MENU:\n");
    printf("\t 1. Votar\n");
    printf("\t 2. Excluir voto\n");
    printf("\t 3. Imprimir relatório final\n");
    printf("\t 4. Sair\n");
    printf("-- Digite sua escolha: ");
    scanf("%d", &c);
  } while (c <= 0 || c > 4);
  getchar();
  return c;
}

int procurar_cpf(int *cpf, eleitor *ini)
{
  eleitor *p = NULL;

	for (p = ini->prox; p != NULL; p = p->prox)
  {
    if(*p->cpf == *cpf) return 0;
  }
  return -1;
}

void votar(eleitor *ini)
{
  eleitor *nova = NULL;
  nova = (eleitor *)(malloc(sizeof(eleitor)));
  if (nova == NULL) {
		printf("\nErro ao alocar memoria!");
		exit(1);
	}
  printf("Digite seu CPF: ");
  scanf("%lu", &nova->cpf);

  if(procurar_cpf(nova->cpf, ini))
  {
    printf("-- MENU DE VOTAÇÃO:\n");
    printf("\t 1. Fulano\n");
    printf("\t 2. Ciclano\n");
    printf("\t 3. Branco\n");
    printf("-- Digite sua escolha: ");
    scanf("%d", &nova->nro_candidato);
  } else {
    printf("Esse CPF já possui um voto cadastrado!\n");
  }

  nova->prox = ini->prox;
  ini->prox = nova;
}

void imprimir(eleitor *ini)
{
  eleitor *p = NULL;
  int opcao1 = 0, opcao2 = 0;

  for (p = ini->prox; p != NULL; p = p->prox)
  {
    if(p->nro_candidato == 1) opcao1++;
    if(p->nro_candidato == 2) opcao2++;
  }

  printf("Numero de votos para o candidato Fulano: %d\n", opcao1);
  printf("Numero de votos para o candidato Ciclano: %d\n", opcao2);
}

void apagar(eleitor *ini)
{
  eleitor *p = NULL, *j = NULL;

  int cpf[11];
  printf("Digite seu CPF: ");
  scanf("%lu", &cpf);

  for (p = ini->prox; p != NULL; p = p->prox)
  {
    if(*p->cpf == *cpf)
    {
      for (j = ini; j != NULL; j = j->prox)
      {
        if(j->prox == p) j->prox = p->prox;
      }
    }
  }
}

int main()
{
  int escolha;
  eleitor *cell = NULL;

  cell = cria_lista();

  for (;;)
  {
    escolha = menu();
    switch (escolha)
    {
    case 1:
      votar(cell);
      break;
    case 2:
      apagar(cell);
      break;
    case 3:
      imprimir(cell);
      break;
    case 4:
      exit(0);
      break;
    }
  }
  free(cell);

  return 0;
}