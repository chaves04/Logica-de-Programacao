/*
Algoritmo: Ler dados de 10 funcionarios e imprimir os que ganharem acima da media
Aluno: Filipe Gonçalves Botelho
Matrícula: 16/0120276
*/

#include <stdio.h>
#define TAM 2

typedef struct{
        int dia;
        int mes;
        int ano;
}Data;

typedef struct{
    char nome[20];
    char cargo[20];
    char departamento[20];
    int salario;
    Data admissao;
}Dados;

int main(void){
    int soma_salario, media_geral, i;
    Dados tabela[TAM];

    for (i = 0; i < TAM; i++){
        printf("\nDigite o nome: ");
        scanf("%s", tabela[i].nome);
        printf("\nDigite o cargo: ");
        scanf("%s", tabela[i].cargo);
        printf("\nDigite o departamento: ");
        scanf("%s", tabela[i].departamento);
        printf("\nDigite o salario: ");
        scanf("%i", &tabela[i].salario);
        printf("\nDigite a data de admissao: ");
        scanf("%d %d %d", &tabela[i].admissao.dia, &tabela[i].admissao.mes, &tabela[i].admissao.ano);
    }
    soma_salario = 0;
    for(i = 0; i < TAM; i++){
        soma_salario += tabela[i].salario;
    }
    media_geral = soma_salario/TAM;
    printf("\n Lista de Funcionarios que ganham acima da media geral");
    for(i = 0; i < TAM; i++){
        if (tabela[i].salario > media_geral){
            printf("\n\n%s", tabela[i].nome);
            printf("\n%s", tabela[i].cargo);
            printf("\n%s", tabela[i].departamento);
            printf("\n%i", tabela[i].salario);
            printf("\n%i %i %i", tabela[i].admissao.dia, tabela[i].admissao.mes, tabela[i].admissao.ano);
        }
    }
    getchar();
    getchar();

    return 0;
}
