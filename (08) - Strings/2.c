#include <stdio.h>
#include <string.h>

int main(void){

    int numero, maior_nota, i, j, cont;
    char gabarito[11], gab_aluno[11];

    printf("Qual o gabarito da prova? \n");
    scanf(" %[^\n]s%", gabarito);
    printf("Qual a quantidade de alunos? \n");
    scanf("%i", &numero);

    maior_nota = 0;
    for(i = 0; i < numero; i++){
        printf("Resposta do aluno %i \n", i+1);
        scanf(" %[^\n]s%", gab_aluno);
        cont = 0;
        for(j = 0; j < 10; j++){
            if (gabarito[j] == gab_aluno[j]){
                cont++;
            }
        }
        if (cont > maior_nota){
            maior_nota = cont;
        }
    }

    printf("Maior nota obtida: %i", maior_nota);

    return 0;
}
