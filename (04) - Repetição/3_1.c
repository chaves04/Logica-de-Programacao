#include <stdio.h>

int main(void){

    int i = 1;
    float soma = 0;


    do{
       soma = (float)(i + (i - 1))/i + soma;
       i++;
    }while(i <= 99);

    printf("Soma: %.2f", soma);









    return 0;
}
