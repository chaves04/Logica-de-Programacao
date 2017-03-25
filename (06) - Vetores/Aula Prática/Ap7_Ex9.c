/*Notas dos alunos*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){

    int nota_1[7], nota_2[7], i;
    float media[7];

    for(i = 0; i < 7; i++){
        printf("Entre com as 2 notas do aluno %i\n", i+1);
        scanf("%i %i", &nota_1[i], &nota_2[i]);
        media[i] = (nota_1[i]+nota_2[i])/2;
    }

    for(i = 0; i < 7; i++){
        printf("Aluno %i: %i %i %.2f \n", i+1, nota_1[i], nota_2[i], media[i]);
    }



    return 0;
}
