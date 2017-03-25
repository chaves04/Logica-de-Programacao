#include <stdio.h>

int Soma(int numero){
    if (numero == 0)
        return 0;
    else
        return numero + Soma(numero-1);
}

int main(void){
    int numero, res;

    printf("Qual numero voce deseja somar? \n");
    scanf("%i", &numero);
    res = Soma(numero);
    printf("%i \n", res);
    return 0;
}
