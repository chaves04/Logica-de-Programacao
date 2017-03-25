#include <stdio.h>
#define MASCULINO 18
#define FEMININO 21


int main(void){

    char nome[20], sexo;
    int idade;

    printf("Entre com o nome\n");
    gets(nome);

    printf("Qual o sexo? M - masculino e F - Feminino\n");
    scanf("%c", &sexo);

    printf("Qual a idade?\n");
    scanf("%i", &idade);

    if (sexo == 'M'){
        if (idade >= MASCULINO){
            printf("%s Atingiu a maioridade!", nome);
        } else{
            printf("%s Nao atingiu a maioridade!", nome);
        }
    }else {
        if (idade >= FEMININO){
            printf("%s Atingiu a maioridade!", nome);
        } else{
            printf("%s Nao atingiu a maioridade!", nome);
        }
    }






 return 0;
}
