#include <stdio.h>

int main(void){

    int nota,  i = 0, maior = 0, menor = 11, soma = 0;

    float media;

    for(i ; i < 10 ; i++){
        scanf("%i", &nota);

        soma = nota + soma;

        if (nota > maior)
            maior = nota;

        if (nota < menor)
            menor = nota;

    }

    printf("A soma e': %i\n", soma);
    printf("A media e': %.1f\n", (float)soma/10);
    printf("A menor e': %i\n", menor);
    printf("A maior e': %i\n", maior);





    return 0;
}
