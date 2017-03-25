
#include <stdio.h>

int x0, y0;

void LePonto(void){
    printf("Entre com as coordenadas de um ponto no plano cartesiano\n");
    scanf("%i %i", &x0 ,&y0);
}

int main(void){
    int x1, y1;
    LePonto();
    printf("Entre com as coordenadas de outro ponto no plano cartesiano\n");
    do{
        scanf("%i %i", &x1, &y1);
    }while(x1==x0);
    printf("O coeficiente angular e' %.2f\n", (float)(x1-(x0))/(y1-(y0)));
    return 0;
}
