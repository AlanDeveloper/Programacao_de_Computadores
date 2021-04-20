#include <stdio.h>

int main() {
    int vetorV[5], i;
    vetorV[0] = 0;
    vetorV[1] = 1;
    vetorV[2] = 2;
    vetorV[3] = 3;
    vetorV[4] = 4;

    for(i=0;i < 5;i++) {
        printf("%d ", &vetorV[i]);

        if(i == 4) vetorV[i] += 3;
    }

    printf("%d ", &vetorV[4]);

    return 0;
}

// RESULTADO DO TESTE É QUE O ENDEREÇO DE MEMÓRIA NÃO É MODIFICADO, PERMANESCE O MESMO, APENAS HÁ UM ACRÉSCIMO NO VALOR