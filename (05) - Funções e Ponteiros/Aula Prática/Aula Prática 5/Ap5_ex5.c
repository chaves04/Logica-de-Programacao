/*Maior número*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

float maior_numero(float y, float z, float w){
    if(y > z && y > w){
        return y;
    }
    else if(z > y && z > w){
        return z;
    }
    else{
        return w;
    }

}

int main(void){

    float a,b,c;

    printf("Entre com os valores A, B e C\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("O maior e': %.2f", maior_numero(a,b,c));






    return 0;
}
