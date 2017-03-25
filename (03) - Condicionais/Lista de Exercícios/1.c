#include <stdio.h>
#include <math.h>
#define PI 3.14

int main (void){

    double h, r, v;

    printf("Entre com o raio e a altura do cilindro\n");
    scanf("%lf %lf", &r, &h);


    v = pow(r,2)*PI*h;

    printf("O volume: %.2lf", v);






	return 0;
}
