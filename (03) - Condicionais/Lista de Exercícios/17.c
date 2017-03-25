#include <stdio.h>

int main(void){

    float km, litros;

    printf("Digite a quantidade de Km percorrido e litros consumido\n");
    scanf("%f %f", &km ,&litros);

    if (km/litros <= 5){
        printf("O consumo e' ruim");
    }
    else if (km/litros <= 8){
        printf("O consumo e' razoavel");
    }
    else if (km/litros <= 11){
        printf("O consumo e' bom");
    }
    else if (km/litros <= 14){
        printf("O consumo e' otimo");
    }else{
        printf("O consumo e' excelente");
    }


    return 0;
}
