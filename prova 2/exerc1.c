#include <stdio.h>
#include <stdlib.h>

void exemplo1(int x[10]);
void exemplo2(int x[]);
void exemplo3(int *x);

int main()
{
  int x[10];

  for (int i = 0; i < 10; i++) x[i] = i;
  
  exemplo1(x);
  printf("\n-------------------\n");
  exemplo2(x);
  printf("\n-------------------\n");
  exemplo3(x);
  printf("\n-------------------\n");

  return 0;
}

void exemplo1(int x[10])
{
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", x[i]);
  }
}

void exemplo2(int x[])
{
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", x[i]);
  }
}

void exemplo3(int *x)
{
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", x[i]);
  }
}