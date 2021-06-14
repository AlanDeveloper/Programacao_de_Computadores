#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ler(void)
{
  int n = 0;
  char *p = NULL, c;
  p = (char *)(malloc(sizeof(char)));
  if (p == NULL) {
		printf("\nErro ao alocar memoria!");
		exit(1);
	}

  c = getchar();
  while (c != '\n')
  {
    p[n++] = c;
    p = (char *)(realloc(p, sizeof(char) * (n + 1)));
    c = getchar();
  }
  p[n] = '\0';

  return p;
}

int main()
{
  char *p = NULL;

  printf("Digite seu nome: ");
  p = ler();
  strcat(p, "@inf.ufpel.edu.br");

  printf("%s", p);
  free(p);

  return 0;
}