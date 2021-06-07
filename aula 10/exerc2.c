#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
  float conteudo;
  struct cell *prox;
} celula;

celula *cria(void)
{
  celula *cell;
  cell = (celula *)(malloc(sizeof(celula)));
  cell->prox = NULL;
  return cell;
}

void insere(float x, celula *p)
{
  celula *nova;

  nova = (celula *)(malloc(sizeof(celula)));
  nova->conteudo = x; 
  nova->prox = p->prox;
  p->prox = nova;
}

void imprime(celula *ini)
{
  celula *p;
  for (p = ini->prox; p != NULL; p = p->prox)
  {
    printf("%.2f\n", p->conteudo);
  }
  
}

void duplicados(celula *ini)
{
  celula *p, *j;
  for (p = ini->prox; p != NULL; p = p->prox)
  {
    for (j = ini->prox; j != NULL; j = j->prox)
    {
      if (p->conteudo == j->conteudo && p->prox != j->prox)
      {
        p->prox = j->prox;
      }
    }
  }
}

int main()
{
  float aux;
  int i, n;

  printf("Digite a quantidade de numeros decimais: ");
  scanf("%d", &n);

  celula *cell;
  cell = cria();

  for (i = 0; i < n; i++)
  {
    printf("Digite um numero decimal: ");
    scanf("%f", &aux);

    insere(aux, cell);
  }

  printf("----Lista de numeros:\n");
  imprime(cell);
  printf("----Lista de numeros sem duplicacao:\n");
  duplicados(cell);
  imprime(cell);

  free(cell);

  return 0;
}