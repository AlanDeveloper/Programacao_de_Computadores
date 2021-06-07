#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// LISTA DUPLAMENTE ENCADEADA

typedef struct exerc3
{
  int numero;
  struct exerc3 *ant; // Com esse ponteiro criamos uma lsita encadeada
  struct exerc3 *prox; // Com esse ponteiro criamos uma lista duplamente encadeada
} exemplo;


// Como é uma lista duplamente encadeada, podemos ter o controle de quando começa e termina
typedef struct lista
{
  exemplo *inicio;
  exemplo *fim;
} lista;

lista *cria(void)
{
  lista *lista;
  lista = (malloc(sizeof(lista))); // Alocando memória para lista
  lista->inicio = NULL;
  lista->fim = NULL;

  return lista;
}

void insereNoInicio(lista *lista, int x)
{ 
  exemplo *nova;
  nova = (exemplo *)(malloc(sizeof(exemplo)));
  nova->numero = x;
  nova->prox = NULL;
  nova->ant = NULL;

  if (lista->inicio == NULL) // A partir da lista onde temos o controle o fim, manipulamos onde inserir o elemento
  {
    lista->inicio = nova;
    lista->fim = nova;
  } else
  {
    lista->inicio->ant = nova; // Estamos dizendo que o primeiro elemento da lista agora tem um anterior
    nova->prox = lista->inicio; // Estamos dizendo que o elemento criado possui um próximo, que será o primeiro da lista
    lista->inicio = nova; // Adicionamos o novo elemento como primeiro da lista
  }
}

void insereNoFim(lista *lista, int x)
{ 
  exemplo *nova;
  nova = (exemplo *)(malloc(sizeof(exemplo)));
  nova->numero = x;
  nova->prox = NULL;
  nova->ant = NULL;

  if (lista->inicio == NULL) // A partir da lista onde temos o controle o fim, manipulamos onde inserir o elemento
  {
    lista->inicio = nova;
    lista->fim = nova;
  } else
  {
    lista->fim->prox = nova; // Estamos dizendo que o último elemento possuí um próximo
    nova->ant = lista->fim; // Estamos dizendo que o anterior ao novo elemento é o último da lista
    lista->fim = nova; // Adicionamos o novo elemento como último da lista
  }
}

void imprimeProx(lista *lista)
{
  exemplo *p;
  if(lista->inicio == NULL)
  {
    printf("Lista vazia!");
  } else
  {
    p = lista->inicio; // Vamos imprimir na ordem de próximo, começando pelo inicio da lista
    while(p != NULL)
    {
      printf("%d ", p->numero);
      p = p->prox;
    }
  }
}

void imprimeAnt(lista *lista)
{
  exemplo *p;
  if(lista->fim == NULL)
  {
    printf("Lista vazia!");
  } else
  {
    p = lista->fim; // Vamos imprimir na ordem de anterior, começando pelo fim da lista
    while(p != NULL)
    {
      printf("%d ", p->numero);
      p = p->ant;
    }
  }
}

void removerNoInicio(lista *lista)
{
  lista->inicio->prox->ant = NULL; // Estamos dizendo que o segundo elemento da lista não tem um anterior
  lista->inicio = lista->inicio->prox; // Adicionamos o segundo elemento da lista como primeiro
}

void removerNoFim(lista *lista)
{
  lista->fim->ant->prox = NULL; // Estamos dizendo que o penúltimo elemento não possuí um próximo
  lista->fim = lista->fim->ant; // Adicionamos o penúltimo elemento da lista como último
}

int main()
{
  lista *lista;
  lista = cria(); // Inicia a lista

  int i;
  for (i = 0; i < 5; i++)
  {
    insereNoInicio(lista, i);
    // insereNoFim(lista, i);
  }
  imprimeProx(lista);
  printf("\n-------------------\n");
  imprimeAnt(lista);

  printf("\n-------------------\n");
  removerNoInicio(lista);
  imprimeProx(lista);

  printf("\n-------------------\n");
  removerNoFim(lista);
  imprimeProx(lista);

  free(lista);
  return 0;
}