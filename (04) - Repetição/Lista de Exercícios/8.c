#include <stdio.h>

int main(void){

    int i, idade[30], menor = 100, cont = 0;

    for(i = 0; i < 30; i++){
        printf("Digite a idade numero: %i\n");
        scanf("%i", &idade[i]);
        if(idade[i] <= menor){
                if(idade[i] == menor){
                    cont++;
                }
           menor = idade[i];
        }
    }

    printf("Menor idade:%i\nQuantidade de vezes que aparece:%i", menor, cont+1);




    return 0;
}
