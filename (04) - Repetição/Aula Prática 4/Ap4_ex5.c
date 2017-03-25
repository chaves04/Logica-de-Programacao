#include <stdio.h>

int main(void){

    int x, k, i, j, prod;

    for(i = 0; i < 4; i++){
        printf("Entre com os valores de 'X' e 'K'\n");
        scanf("%i %i", &x, &k);
        prod = 1;
        for(j = 0; j < k; j++){
            prod = prod * x;
        }
        printf("O resultado e': %i\n", prod);
    }




    return 0;
}
