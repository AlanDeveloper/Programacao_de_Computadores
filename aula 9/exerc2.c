#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p = NULL;
    int i, n;

    printf("Digite a quantidade de numeros decimais: ");
    scanf("%d", &n);

    p = (float *)(malloc(sizeof(float) * n));
    if (p == NULL)
    {
        printf("Nao e possivel alocar memoria!");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero decimal: ");
        scanf("%f", &p[i]);
    }

    int j, n1 = n;
    float *p1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i != j && p[i] == p[j] && p[j] != -323) {
                p[j] = -323;
                n1--;
            }
        }
    }

    p1 = (float *)(malloc(sizeof(float) * n1));
    for (i = 0, j = 0; i < n; i++)
    {
        if(p[i] != -323) {
            p1[j] = p[i];
            j++;
        } 
    }
    
    for (i = 0; i < n1; i++)
    {
        printf("%.2f ", p1[i]);
    }
    free(p);
    free(p1);

    return 0;
}