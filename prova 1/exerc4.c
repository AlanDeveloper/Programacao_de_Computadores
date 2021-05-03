#include <stdio.h>

int main() {
    int i, n = 30;
    char senha[n];

    printf("Digite uma senha(max %d): ", n);
    scanf("%s", &senha);

    for (i = 0;senha[i] != '\0';i++) {
        if (senha[i] == 'a') {
            senha[i] = '@';
        }
        if (senha[i] == 'e') {
            senha[i] = 'f';
        }
        if (senha[i] == 'i') {
            senha[i] = 'j';
        }
        if (senha[i] == 'o') {
            senha[i] = 'p';
        }
    }
    printf("%s", senha);

    return 0;
}