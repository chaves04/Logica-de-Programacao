#include <stdio.h>

int main(void){

    char nome[20];
    float valor;

    do{


        scanf("%f", &valor);
        getchar();
        gets(nome);

        if (valor >= 5000){
            printf("O Bonus e': %.2f\n", valor*1.125);
        }
        else{
            printf("O Bonus e': %.2f\n", valor*1.15);
        }
    }while(valor > 0);







    return 0;
}
