#include <stdio.h>

int main() {
    int n, i = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
    char letra;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 0;i < n;i++) {
        printf("Digite um conceito(A,B,C,D,E): ");
        scanf(" %c", &letra);

        if(letra == 'a' || letra == 'A') a++;
        if(letra == 'b' || letra == 'B') b++;
        if(letra == 'c' || letra == 'C') c++;
        if(letra == 'd' || letra == 'D') d++;
        if(letra == 'e' || letra == 'E') e++;
    }

    printf("Resultado: \nA: %d\nB: %d\nC: %d\nD: %d\nE: %d", a, b, c, d, e);

    return 0;
}