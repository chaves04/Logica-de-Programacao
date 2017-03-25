#include <stdio.h>

int main(void){

    int ano = 2006;
    float porcentagem = 0.015, salario = 1000;

    for(ano; ano <= 2017; ano++){
        salario = (1+porcentagem)*salario;
        porcentagem = porcentagem*2;
    }

    printf("%.2f\n", salario);








    return 0;
}
