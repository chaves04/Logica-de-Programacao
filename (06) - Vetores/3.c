#include <stdio.h>

void Busca(int *cod, float *preco, int busca_cod){
    int i;
    printf("O preco para o codigo informado e': R$ ");
    for(i = 0; i < 10; i++){
        if (cod[i] == busca_cod)
            printf("%.2f", preco[i]);
    }
}

void Leitura(int *cod, float *preco){
    int i;
    printf("Digite o codigo e o preco dos produtos\n");
    for(i = 0; i < 10; i++){
        scanf("%i %f", &cod[i], &preco[i]);
    }

}

int main(void){

    int cod[10], busca_cod;
    float preco[10];
    Leitura(&cod, &preco);
    printf("Digite o codigo a ser pesquisado\n");
    scanf("%i", &busca_cod);
    Busca(&cod, &preco, busca_cod);



    return 0;
}
