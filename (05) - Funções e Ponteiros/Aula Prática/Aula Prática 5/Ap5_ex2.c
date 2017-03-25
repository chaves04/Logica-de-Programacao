/*Peso Ideal*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

float peso_ideal(char x, float y){
    if(x == 'f' || x == 'F'){
        return (62.1*y)-44.7;
    }
    else{
        return (72.7*y)-58;
    }

}

int main(void){

    int n_pessoa,i;
    float alt;
    char sexo;

    printf("Qual a quantidade de pessoas?\n");
    scanf("%i", &n_pessoa);

    for(i = 0; i < n_pessoa; i++){
        printf("Qual o sexo da pessoa?\n");
        scanf(" %c", &sexo);
        printf("Qual a altura?\n");
        scanf("%f", &alt);
        printf("Peso ideal: %.2f\n", peso_ideal(sexo,alt));
    }

    return 0;
}
