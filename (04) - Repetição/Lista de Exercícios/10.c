#include <stdio.h>

int main(void){

    int numero, par = 0, impar = 0;

    while(numero > 0){
        scanf("%i", &numero);

        if(numero >= 0){
            if (numero%2 == 0){
                par++;
            }
            else{
                impar++;
            }
        }
    }

    printf("Par:%i - %.2f\nImpar:%i - %.2f",par,(float)par/(par+impar)*100, impar,(float)par/(par+impar)*100);




    return 0;
}
