#include <stdio.h>

int main(void){

    int cont_1 = 0, cont_2 = 0, cont_3 = 0, pontos = 1;

    while ( 0 < pontos ){

        scanf("%i", &pontos);

        if (pontos >=0 && pontos < 5 ){
            cont_2++;
        }

        if (pontos >=5 && pontos <= 10 ){
            cont_3++;
        }


        cont_1++;

    }

    printf("Quantidade de alunos que fizeram o teste: %i\n", cont_1-1);
    printf("Quantidade de alunos que tiraram nota baixa: %i\n", cont_2);
    printf("Quantidade de alunos que tiraram nota alta: %i\n", cont_3);









    return 0;
}
