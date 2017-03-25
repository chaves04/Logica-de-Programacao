#include <stdio.h>

int main(void){

    FILE *fp;

    int codigo, i, j, numero;
    char nome_arquivo[20], nome_novo_arquivo[20], nome[20], aluno[20];
    float notas[3];

    printf("Qual o nome do arquivo que deseja abrir?\n");
    scanf(" %[^\n]", nome_arquivo);
    fp = fopen(nome_arquivo,"a");
    if (fp == NULL){
        printf("Arquivo nao existente!\n");
    }
    else{
        printf("Qual a quantidade de alunos?\n");
        scanf("%i", &numero);
        for(i = 0; i < numero; i++){
            printf("Qual o nome do aluno?\n");
            scanf(" %[^\n]", aluno);
            printf("Qual o codigo do aluno?\n");
            scanf("%i", &codigo);
            fprintf(fp, "%i ", codigo);
            for(j = 0; j < 3; j++){
                printf("Digite a %ia nota do aluno No: %i.\n", j+1, i+1);
                scanf("%f", &notas[j]);
                fprintf(fp, "%.2f ", notas[j]);
            }
            fprintf(fp, " %s\n", aluno);
        }
        fclose(fp);
    }
    return 0;
}
