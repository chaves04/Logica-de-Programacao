/* *****************************************
* Descrição : ler e imprimir os dados de DEZ registro
* Entrada : nome, idade, salario
* Saida : nome, idade, salario
*******************************************/
/*
Aluno: Filipe Gonçalves Botelho
Matrícula: 16/0120276
*/

#include <stdio.h>
typedef struct {

    int idade;
    float salario;
    char nome[30];
}tipoDadosFunc;

int main(void){
    tipoDadosFunc dadosfunc[2];
    int i;

    for (i = 0; i < 2; i++){
        printf("Informe o nome: ");
        scanf("%s", dadosfunc[i].nome);
        printf("Informe a idade: ");
        scanf("%i", &dadosfunc[i].idade);
        printf("Informe o salario: ");
        scanf("%f", &dadosfunc[i].salario);
    }
    printf("\n\nDADOS INFORMADOS");
    for (i = 0; i < 2; i++){
        printf("\n\nNome: %s", dadosfunc[i].nome);
        printf("\nIdade: %d", dadosfunc[i].idade);
        printf("\nSalario: %.2f", dadosfunc[i].salario);
    }
    getchar();
    getchar();




    return 0;
}
