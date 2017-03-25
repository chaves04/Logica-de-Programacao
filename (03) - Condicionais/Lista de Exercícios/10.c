#include <stdio.h>

int main(void){

    char nomes[2][20];
    int idade[2];

    printf("Digite os nomes\n");
    gets(nomes[0]);
    gets(nomes[1]);
    printf("Digite as idades, respectivamente\n");
    scanf("%i %i", &idade[0], &idade[1]);

    if (idade [0] > idade[1]){
        printf("Nome da mais velha: %s\n", nomes[0]);
        printf("Idade da mais nova: %i\n", idade[1]);
    }
    else{
        printf("Nome da mais velha: %s\n", nomes[1]);
        printf("Idade da mais nova: %i\n", idade[0]);
    }





    return 0;
}
