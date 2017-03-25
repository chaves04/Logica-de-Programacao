#include <stdio.h>

float CoeficienteAngular (int x0, int y0, int x1, int y1){


    return (float)(x1-x0)/(y1-y0);

}

int main(void){

    int x0,x1,y0,y1;

    printf("Entre com as coordenadas do primeiro pornto.\n");
    scanf("%i %i", &x0, &y0);
    printf("Entre com as coordenadas do segundo pornto.\n");
    scanf("%i %i", &x1, &y1);
    printf("O Coeficiente Angular e': %.2f\n", CoeficienteAngular(x0,y0,x1,y1));



    return 0;
}
