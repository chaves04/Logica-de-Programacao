#include <stdio.h>

int main(void){

    float morango, maca, total[4];

    printf("Digite a quilograma (Kg) de morango e maca comprada\n");
    scanf("%f %f", &morango,&maca);

    if (morango <= 5){
        total[0]=morango*2;
    }
    else {
        total[0]=morango*1.8;
    }

    if (maca <= 5){
        total[1]=morango*1.5;
    }
    else{
        total[1]=morango*1.1;
    }

    total[2]=morango+maca;
    total[3]=total[0]+total[1];

    if (total[2] > 8 || total[3] > 25.00){
        total[3]=total[3]*0.9;
        printf("Valor a ser pago com 10%% de desconto: %.2f", total[3]);
    }
    else{
        printf("Valor a ser pago: %.2f", total[3]);
    }


    return 0;
}
