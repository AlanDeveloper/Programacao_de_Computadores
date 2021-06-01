#include <stdio.h>
#include <stdlib.h>

// Esse exercício só captura palavras de até 8 bits? Ou meu algoritmo que ficou incompleto?

int main()
{
    int n = 0;
    char *p = NULL, c;

    p = (char *)(malloc(sizeof(char)));
    printf("Digite sua senha: ");

    c = getchar();
	while (c != '\n') {
		p[n++] = c;
        p = (char *)(realloc(p, sizeof(char) * (n + 1)));
		c = getchar();
	}
	p[n] = '\0';

    if (p == NULL)
    {
        printf("Nao foi possivel alocar memoria!");
        exit(1);
    }

    for (int i = 0;p[i] != '\n';i++) {
        if (p[i] == 'a') p[i] = '@'; 
        if (p[i] == 'e') p[i] = 'f';
        if (p[i] == 'i') p[i] = 'j';
        if (p[i] == 'o') p[i] = 'p';
    }
    printf("%s", p);
    free(p);

    return 0;
}