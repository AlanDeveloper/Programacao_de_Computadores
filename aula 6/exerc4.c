#include <stdio.h>

int tabuada(int *n) {
    int i;

    for(i = 0;i <= 10;i++) {
        printf("%d x %d = %d\n", i, *n, i * *n);
    }
    return 0;
}

int main() {
    int n = 1, i;

    for(i = 1;i <= 10;i++) {
        tabuada(&n);
        n++;
    }

    return 0;
}