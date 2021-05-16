#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
    float raio;
} Circulo;

int menu(void) {
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir os pontos centrais\n");
		printf("\t 2. Inserir os raios\n");
		printf("\t 3. Listar os pontos\n");
		printf("\t 4. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 4);
	getchar();

	return c;
}

int main() {
    int n, i, escolha;

    printf("Escolha a quantidade de circulos: ");
    scanf("%d", &n);

    Circulo p[n];

    for (;;) {
		escolha = menu();
		switch (escolha) {
            case 1:
                for(i = 0;i < n;i++) {
                    printf("Coordenada X: ");
                    scanf("%f", &p[i].x);

                    printf("Coordenada Y: ");
                    scanf("%f", &p[i].y);
                }
            break;
            case 2:
                for(i = 0;i < n;i++) {
                    printf("Raio: ");
                    scanf("%f", &p[i].raio);
                }
            break;
            case 3:
                for(i = 0;i < n;i++) {
                    printf("Coordenada X: %.2f Coordenada Y: %.2f Raio: %.2f\n", p[i].x, p[i].y, p[i].raio);
                }
            break;
            case 4:
                exit(0);
            break;
		}
	}
    
    return 0;
}   