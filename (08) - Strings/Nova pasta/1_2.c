#include <stdio.h>


int main(void){
    int i, j, maior_nota, nota, tamanho;
    char gabarito[10], gab_aluno[10];


    printf("Qual o gabarito da prova? \n");
    scanf(" %[^\n]s%*c", gabarito);
    printf("Nro de alunos: \n");
    scanf("%i", &tamanho);

    maior_nota = 0;
    i = 0;
    while(i < tamanho){
        printf("Respostas do aluno %i: ", i+1);
        scanf(" %[^\n]s%*c", gab_aluno);
        nota = 0;
        j = 0;
        while (j < 10){
            if(gab_aluno[j] == gabarito[j]){
                nota++;
            }
            j++;
        }
        if (nota > maior_nota){
            maior_nota = nota;
        }
        i++;
    }
    printf("Maior nota obtida: %i", maior_nota+1);

    getchar();
    return 0;
}
