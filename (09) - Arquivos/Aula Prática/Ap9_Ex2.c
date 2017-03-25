#include <stdio.h>
#include <string.h>

int main(void){

    FILE *fp;
    int numero,i, j, codigo;
    float notas[3];
    char nome[20], aluno[30];

    printf("Qual o nome do arquivo?\n");
    scanf(" %s", nome);
    fp = fopen(nome,"w");
    printf("Qual a quantidade de alunos?\n");
    scanf("%i", &numero);
    for(i = 0; i < numero; i++){
        printf("Qual o nome do aluno?\n");
        scanf(" %[^\n]", &aluno);
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


    return 0;
}
