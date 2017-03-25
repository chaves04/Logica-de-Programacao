#include <stdio.h>

void Verificacao(int *cod, float *preco, float *soma, int *cod_mcaro, float *preco_mcaro){
    int i;
    *soma = 0;
    *cod_mcaro = 0;
    *preco_mcaro = 0;
    for(i = 0; i < 5; i++){
        *soma += preco[i];
        if(preco[i] > *preco_mcaro){
            *preco_mcaro = preco[i];
            *cod_mcaro = cod[i];
        }
    }

}

void Leitura(int *cod, float *preco){
    int i;
    printf("Entre com o codigo e o preco \n");
    for(i = 0; i<5; i++){
        scanf("%i %f", &cod[i], &preco[i]);
    }
}

int main(void){
    int cod[5], cod_mcaro;
    float preco[5], preco_mcaro, soma;
    Leitura(&cod, &preco);
    Verificacao(&cod, &preco, &soma, &cod_mcaro, &preco_mcaro);
    printf("O codigo e preco do produto mais caro: %i %.2f \n", cod_mcaro, preco_mcaro);
    printf("Media dos precos dos artigos: R$ %.2f \n", soma/5);

    return 0;
}
