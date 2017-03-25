#include <stdio.h>
#include <math.h>

float PesoIdeal (float y, char x){

    if(x == 'F' || x == 'f'){
        return (20*pow(y,2));
    }
    else{
        return (23*pow(y,2));
    }
}

int main(void){

    int pessoa, i;
    float alt;
    char sexo;

    printf("Qual a quantidade de pessoas?\n");
    scanf("%i", &pessoa);

    for(i = 0; i < pessoa; i++){
        printf("Qual o sexo?\n");
        scanf(" %c", &sexo);
        printf("Qual a altura em metros?\n");
        scanf("%f", &alt);
        printf("O peso ideal e': %.2f\n", PesoIdeal(alt,sexo));
    }


    return 0;
}
