#include <stdio.h>

int main(void){

    int pessoas = 0, andares, i, entrada, saida;

    printf("Quantas andares tem o predio?\n");
    scanf("%i", &andares);
    for(i = 0; i <= andares; i++){
        printf("Quantas pessoas entraram e sairam no andar %i\n", i);
        scanf("%i %i", &entrada, &saida);
        pessoas = pessoas + entrada - saida;
        if(pessoas > 15){
            printf("Excesso de passageiros! Devem sair %i passageiros\n", pessoas - 15);
        }
    }
    printf("Quantidade de pessoas que permaneceram para descer e': %i\n", pessoas);











    return 0;
}
