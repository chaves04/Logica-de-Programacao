/* *****************************************
* Descrição : ler e imprimir os dados de UM registro
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
} tipoDadosFunc;

int main(void){
    tipoDadosFunc dadosfunc;
    int i;

    printf("Informe o nome: ");
    scanf("%s", dadosfunc.nome);
    printf("Informe a idade: ");
    scanf("%d", &dadosfunc.idade);
    printf("Informe o salario: ");
    scanf("%f", &dadosfunc.salario);
    printf("\nNome: %s", dadosfunc.nome);
    printf("\nIdade: %d", dadosfunc.idade);
    printf("\nSalario: %.2f", dadosfunc.salario);
    getchar();
    getchar();


    return 0;
}
