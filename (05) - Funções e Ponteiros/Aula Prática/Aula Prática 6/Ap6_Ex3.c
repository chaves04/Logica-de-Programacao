/*Determinar raízes reais de um delta*/
/*Aluno: Filipe Gonçalves*/
/*MAtrícula: 16/0120276*/
#include <stdio.h>
#include <math.h>

void Raizes(int a, int b, int c, float* x1, float* x2, float* delta){


    *delta=(pow(b,2)-(4*a*c));
    if (*delta > 0){
        *x1 = (-(b)+sqrt(*delta))/(2*a);
        *x2 = (-(b)-sqrt(*delta))/(2*a);
    }
    else if(*delta==0){
        *x1=*x2= (float)-(b)/(2*a);
    }

}

int main(void){
    int a,b,c;
    float x1,x2, delta;

    printf("Entre com os valores de A,B e C\n");
    scanf("%i %i %i", &a, &b, &c);
    Raizes(a,b,c, &x1, &x2, &delta);
    if (delta >= 0){
        printf("%.2f %.2f", x1, x2);
    }
    else{
        printf("Nao existem raizes reais!");
    }


    return 0;
}
