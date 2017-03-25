/*Produto de 10 pares de números*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int Produto(int x, int y){
    return x*y;
}

int main(void){
    int a, b, i;
    for(i = 0; i < 10; i++){
        printf("Digite o par de numeros\n");
        scanf("%i %i", &a ,&b);
        printf("O produto de %i por %i e': %i\n", a, b, Produto(a,b));
    }

    return 0;
}
