/*
Algoritmo: Gravar em um arquivo binário a matrículas e as notas 
das provas e trabalhos do aluno registro por registro
Matrícula: 160120276
Aluno: Filipe Gonçalves Botelho
*/

#include <stdio.h>
#define TAM 10
typedef struct{
    int matricula;
    int nota_prova[3];
    int nota_trabalho[5];
} Dados;

int main(void){
    FILE *fp;
    char nomearq[50] = "arquivo.bin";
    Dados alunos[TAM];
    int i, j, k;

    fp = fopen(nomearq, "wb");
    for (i = 0; i < TAM; i++){
        printf("Digite a matricula: \n");
        scanf("%i", &alunos[i].matricula);
        for (j = 0; j < 3; j++){
            printf("Digite a nota da prova %i\n", j+1);
            scanf("%i", &alunos[i].nota_prova[j]);
        }
        for (k = 0; k < 5; k++){
            printf("Digite a nota do trabalho %i\n", k+1);
            scanf("%i", &alunos[i].nota_trabalho[k]);
        }
        fwrite(alunos, sizeof(Dados), 1, fp);
    }

    fclose(fp);

    fp = fopen(nomearq, "rb");
    fread(alunos, sizeof(Dados), TAM, fp);
    for (i = 0; i < TAM; i++){
        printf("Matricula: %i\n", alunos[i].matricula);
        for(j = 0;j < 3; j++){
            printf("Nota da prova %i: %i\n", j+1,alunos[i].nota_prova[j]);
        }
        for(k = 0;k < 5; k++){
            printf("Nota do trabalho %i: %i\n", j+1, alunos[i].nota_trabalho[k]);
        }
    }
    fclose(fp);

    return 0;
}
