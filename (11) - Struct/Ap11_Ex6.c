/*
Algoritmo: Ler dados de 10 registros e imprimir os que fazem aniversario em dezembro
Aluno: Filipe Gonçalves Botelho
Matrícula: 16/0120276
*/


#include <stdio.h>
#define TAM 10
typedef struct{
    int dia;
    int mes;
    int ano;

}Aniversario;

typedef struct{
    char nome[20];
    char endereco[40];
    int telefone;
    Aniversario aniversario;

}Agenda;


int main(void){
    int i;
    Agenda agenda[TAM];

    for (i = 0; i < TAM; i++){
        printf("Digite o nome: ");
        scanf("%[^\n]s%", agenda[i].nome);
        getchar();
        printf("Digite o endereco: ");
        scanf("%[^\n]s%", agenda[i].endereco);
        getchar();
        printf("Digite o telefone: ");
        scanf("%i", &agenda[i].telefone);
        printf("Digite o aniversario: ");
        scanf("%i %i %i", &agenda[i].aniversario.dia, &agenda[i].aniversario.mes, &agenda[i].aniversario.ano);
        getchar();
        printf("\n");

    }
    for(i = 0; i < TAM; i++){
        if(agenda[i].aniversario.mes == 12){
            printf("\nNome: %s", agenda[i].nome);
            printf("\nEndereco: %s", agenda[i].endereco);
            printf("\nTelefone: %i", agenda[i].telefone);
            printf("\nAniversario: %i %i %i", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        }
        printf("\n");
    }


    return 0;
}
