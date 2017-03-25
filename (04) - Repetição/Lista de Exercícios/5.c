#include <stdio.h>

int main(void){

    int i, m[20], cont_par = 0, cont_impar = 0, soma = 0;

    for (i = 0; i < 20; i++){
        scanf("%i", &m[i]);

        if(m[i]%2 == 0){
            cont_par++;
        }
        else{
            cont_impar++;
        }

        soma = soma + m[i];
    }

    printf("A media:%.2f\nN de par:%i\nN de impar:%i\n", (float)soma/10, cont_par, cont_impar);


    return 0;
}
