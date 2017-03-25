#include <stdio.h>

int main(void){

    int x, k, i, j, prod;

    for(i = 0; i < 4; i++){
        printf("Entre com os valores de 'X' e 'K'\n");
        scanf("%i %i", &x, &k);
        prod = 1;
        if(x > 0 && k > 0){
            for(j = 0; j < k; j++){
                prod = prod * x;
            }
            printf("O resultado e': %i\n", prod);
        }
        else if(x > 0 && k < 0){
            k = k * (-1);
            for(j = 0; j < k; j++){
                prod = prod * x;
            }
            printf("O resultado e': %f\n", (float)1/prod);
        }
        else{
            if(k < 0){
                k = k * (-1);
                for(j = 0; j < k; j++){
                    prod = prod * x;
                }
                printf("O resultado e': %f\n", (float)1/prod);
            }
            else{
                for(j = 0; j < k; j++){
                    prod = prod * x;
                }
                printf("O resultado e': %i\n", prod);
            }
        }
    }




    return 0;
}
