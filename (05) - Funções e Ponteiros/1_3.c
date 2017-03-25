#include <stdio.h>
#include <math.h>

int Potencia(int a, int b){
    return pow(a,b);
}

int main(void){

    int x, y;

    printf("Entre com os numeros da Potencia\n");
    scanf("%i %i", &x, &y);
    while(y < 0 || (y == 0 && x != 0)){
            if(y < 0){
                printf("Erro! Y deve ser nao negativo\n");
                printf("Entre com os numeros da Potencia\n");
                scanf("%i %i", &x, &y);
            }
            else{
                printf("O resultado e' 1");
                return 0;
            }

    }
    printf("O resultado e' %i\n", Potencia(x,y));

    return 0;
}
