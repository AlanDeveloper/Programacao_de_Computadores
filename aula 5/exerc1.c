#include <stdio.h>
#include <string.h>

int main() {
    int x, *pontX;
    float y, *pontY;
    char z[30], *pontZ;
    x = 0;
    y = 0;
    strcpy (z,"alan");

    pontX = &x;
    pontY = &y;
    pontZ = z;
    printf("Int: %d\nFloat: %.2f\nChar: %s\n", x, y, z);

    *pontX += 10;
    *pontY += 10;
    *pontZ = *pontZ + 1;
    printf("Int: %d\nFloat: %.2f\nChar: %s", x, y, z);

    return 0;
}