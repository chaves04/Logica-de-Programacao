/*Ler notas dos alunos, determinar média geral e qtd. de provados e reprovados*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/

#include <stdio.h>

int main(void){

    int nota_1[7], nota_2[7], i, aprovado, reprovado;
    float media[7], soma_media;

    soma_media = 0;
    aprovado = 0;
    reprovado = 0;
    for(i = 0; i < 7; i++){
        printf("Entre com as 2 notas do aluno %i\n", i+1);
        scanf("%i %i", &nota_1[i], &nota_2[i]);
        media[i] = (float)(nota_1[i]+nota_2[i])/2;
        soma_media += media[i];
        if (media[i] >= 7)
            aprovado++;
        else
            reprovado++;
    }

    for(i = 0; i < 7; i++){
        printf("Aluno %i: %i %i %.2f \n", i+1, nota_1[i], nota_2[i], media[i]);
    }
    printf("Media Geral da Turma: %.1f \n", soma_media/7);
    printf("Qtd de aprovados: %i \n", aprovado);
    printf("Qtd de reprovados: %i\n", reprovado);

    return 0;
}
