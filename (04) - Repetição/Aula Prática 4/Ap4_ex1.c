#include <stdio.h>

int main(void){

    int ano;
    char sexo;

    printf("Informe o sexo: \n");
    scanf("%c", &sexo);
    while((sexo != 'f')&&(sexo != 'F')&&(sexo != 'm')&&(sexo != 'M')){
        printf("Erro!");
        printf("Informe o sexo novamente: \n");
        getchar();
        scanf("%c", &sexo);
    }
    printf("Informe o ano: \n");
    scanf("%d", &ano);
    printf("Saida - ano = %d e Sexo = %c\n", ano, sexo);
    getchar();
    getchar();
    return 0;




}
