#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    float x;
    float y;
    float raio;
} Circulo;

int menu(void) {
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir o ponto central e raio\n");
		printf("\t 2. Inserir as coordenadas dos pontos\n");
		printf("\t 3. Listar o circulo\n");
		printf("\t 4. Listar os pontos\n");
		printf("\t 5. Listar quantidade de pontos dentro/fora do circulo\n");
		printf("\t 6. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 6);
	getchar();

	return c;
}

int main() {
    int n, i, d, f, escolha;

    printf("Escolha a quantidade de pontos: ");
    scanf("%d", &n);

    Circulo c[1];
    Ponto p[n];

    for (;;) {
		escolha = menu();
		switch (escolha) {
            case 1:
                printf("Coordenada X: ");
                scanf("%f", &c[0].x);

                printf("Coordenada Y: ");
                scanf("%f", &c[0].y);

                printf("Raio: ");
                scanf("%f", &c[0].raio);
            break;
            case 2:
                for(i = 0;i < n;i++) {
                    printf("Coordenada X: ");
                    scanf("%f", &p[i].x);

                    printf("Coordenada Y: ");
                    scanf("%f", &p[i].y);
                
                    if(sqrt(pow(p[i].x - c[0].x, 2) + pow(p[i].y - c[0].y, 2)) <= c[0].raio) {
                        printf("Esta dentro do circulo\n");
                    } else {
                        printf("Esta fora do circulo\n");
                    }
                }
            break;
            case 3:
                printf("Coordenada X: %.2f Coordenada Y: %.2f Raio: %.2f\n", c[0].x, c[0].y, c[0].raio);
            break;
            case 4:
                for(i = 0;i < n;i++) {
                    printf("Coordenada X: %.2f Coordenada Y: %.2f\n", p[i].x, p[i].y);
                }
            break;
            case 5:
                for(i = 0, d = 0, f = 0;i < n;i++) {
                    if(sqrt(pow(p[i].x - c[0].x, 2) + pow(p[i].y - c[0].y, 2)) <= c[0].raio) {
                        d++;
                    } else {
                        f++;
                    }
                }
                printf("Numero de pontos dentro: %d Numero de pontos fora: %d\n", d, f);
            break;
            case 6:
                exit(0);
            break;
		}
	}
    
    return 0;
}   