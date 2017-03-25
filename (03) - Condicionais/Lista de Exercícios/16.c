#include <stdio.h>

int main(void){

    int valor, cont[6];
    cont[0]=cont[1]=cont[2]=cont[3]=cont[4]=cont[5]=0;

    printf("Digite o valor da quantia\n");
    scanf("%i", &valor);

    while (valor >= 100){
        valor = valor - 100;
        cont[0]++;
    }

    while (valor >= 50){
        valor = valor - 50;
        cont[1]++;
    }

    while (valor >= 20){
        valor = valor - 20;
        cont[2]++;
    }

    while (valor >= 10){
        valor = valor - 10;
        cont[3]++;
    }

    while (valor >= 5){
        valor = valor - 5;
        cont[4]++;
    }

    while (valor >= 1){
        valor = valor - 1;
        cont[5]++;
    }

    printf("A menor quantidade de cedulas para completar tal quantia e': \n%i de 100\n%i de 50\n%i de 20\n%i de 10\n%i de 5\n%i de 1\n", cont[0],cont[1],cont[2],cont[3],cont[4],cont[5]);






    return 0;
}
