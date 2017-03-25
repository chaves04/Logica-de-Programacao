#include <stdio.h>

int main(void){

    int codigo;
    float preco;

    while (codigo != 0){
        scanf("%i %f",&codigo, &preco);

        if (codigo%2 == 0){
            preco = preco * 1.2;
            printf("O preco reajustado: R$ %.2f\n", preco);
        }
        else{
            preco = preco * 1.25;
            printf("O preco reajustado: R$ %.2f\n", preco);
        }
    }



    return 0;
}
