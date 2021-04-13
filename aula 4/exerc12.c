#include <stdio.h>
#include <string.h>

int main() {
    int i, n = 2;
    char palavra[70], ch[1];

    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i=0;i < strlen(palavra) - 1;i++) {
        if(palavra[i] != ch[0]) {
            palavra[i] = ' ';
        }
    }
    printf(palavra);

    return 0;
}