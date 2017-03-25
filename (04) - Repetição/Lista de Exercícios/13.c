#include <stdio.h>

int main(void){

    int cont;
    float n_real, soma;

    cont = 0;
    soma = 0;
    do{

        scanf("%f", &n_real);

        if(n_real > 0){
            cont++;

            soma += n_real;

            if(cont%5 == 0){
                printf("O subtotal ate o momento: %.2f\n", soma);
            }
        }
    }while(n_real >= 0);

    printf("O total: %.2f\n", soma);
    printf("A media: %.2f\n", (float)soma/cont);







    return 0;
}
