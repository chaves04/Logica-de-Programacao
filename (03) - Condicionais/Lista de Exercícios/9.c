#include <stdio.h>

int main (void){

    int quantidade;

    printf("Qual a quantidade de laranjas compradas?\n");
    scanf("%i", &quantidade);

    if(quantidade < 12){
        printf("O custo total e': %.2f reais", (float)quantidade*1.3);
    }
    else{
        printf("O custo total e': %i reais", quantidade);
    }









    return 0;
}
