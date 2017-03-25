#include <stdio.h>

int main(void){


    float salario[3];

    printf("Qual o salario das 3 pessoas?\n");
    scanf("%f %f %f", &salario[0], &salario[1], &salario[2]);

    if (salario[0] >= salario[1] && salario[0] >= salario[2]){
        printf("Maior salario e': %.2f", salario[0]);
    }
    else if (salario[1] >= salario[0] && salario[1] >= salario[2]){
        printf("Maior salario e': %.2f", salario[1]);
    }else{
        printf("Maior salario e': %.2f", salario[2]);
    }





    return 0;
}
