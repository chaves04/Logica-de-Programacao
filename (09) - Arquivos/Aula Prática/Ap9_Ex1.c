#include <stdio.h>

int main(void){

    FILE *fp;
    int numero,i, j;
    float notas[3];
    char nome[20];

    printf("Qual o nome do arquivo?\n");
    scanf(" %s", nome);
    fp = fopen(nome,"w");
    printf("Qual a quantidade de alunos?\n");
    scanf("%i", &numero);
    for(i = 0; i < numero; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a %ia nota do %io aluno.\n", j+1,i+1);
            scanf("%f", &notas[j]);
            fprintf(fp, "%i = %.2f ", j +1, notas[j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);


    return 0;
}
