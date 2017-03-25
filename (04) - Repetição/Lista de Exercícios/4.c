#include<stdio.h>

int main(void){


    int i, x[10], cont_par_pos = 0;

    for (i = 0; i < 10; i++){
        scanf("%i", &x[i]);
        if(x[i] > 0 && x[i]%2 == 0)
            cont_par_pos++;
    }

    printf("Quantidade de numeros pares positivos: %i\n", cont_par_pos);
    printf("Os numeros pares positivos ");

    for(i = 0; i < 10; i++){
        if(x[i] > 0 && x[i]%2 == 0)
            printf("%i ", x[i]);
    }



    return 0;
}
