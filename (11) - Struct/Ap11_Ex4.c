/*
Algoritmo: Ler e guardar uma tabela de códigos. Depois procurar um numero na tabela
Aluno: Filipe Gonçalves Botelho
Matrícula: 16/0120276
*/

#include <stdio.h>

typedef struct{
    int codigo;
    char cargo[20];
}Tabelafunc;

int main(void){
    Tabelafunc dados[100];
    int i, j, cod, tamanho;

    printf("Qual o tamanho da tabela? \n");
    scanf("%i", &tamanho);

    for (i = 0; i < tamanho; i++){
        printf("\nInforme o codigo: ");
        scanf("%i", &dados[i].codigo);
        getchar();
        printf("\nInforme o nome: ");
        scanf("%s", dados[i].cargo);
    }
    printf("\nInforme o codigo para ser procurado.\n");
    scanf("%i", &cod);
    j = 0;
    while (dados[j].codigo != cod && j < tamanho){
        j++;
    }
    printf("\n%s", dados[j].cargo);
    getchar();
    getchar();
    return 0;
}