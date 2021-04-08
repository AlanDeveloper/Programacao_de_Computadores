#include <stdio.h>

int main() {
    int i;

    for(i = 0;i < 10;i++) {
        printf("%dx10: %d\n", i+1, (i+1)*10);
    }

    return 0;
}