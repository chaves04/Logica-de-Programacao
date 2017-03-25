#include <stdio.h>

int main(void){

    char nome[20], cargo;
    float salario;

    printf("Digite seu nome\n");
    gets(nome);
    printf("Digite seu cargo. O - Operador e P - Programador\n");
    scanf("%c", &cargo);
    printf("Digite seu salario\n");
    scanf("%f", &salario);

    if (cargo == 'O' || cargo == 'o'){
        printf("Senhor, %s .Seu novo salario e': %.2f\n", nome, salario*1.15);
    }
    else{
        printf("Senhor, %s .Seu novo salario e': %.2f\n", nome, salario*1.25);
    }





    return 0;
}
