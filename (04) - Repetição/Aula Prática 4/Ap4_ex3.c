#include <stdio.h>

int main(void){

    int k, soma, i;

    while(k >= 0){
        printf("K = ");
        scanf("%i", &k);
        if(k > 0){
            soma = 0;
            for(i = 1; i <= k; i++){
                soma += i;
            }
            printf("Soma: %i\n", soma);
        }
        else{
            printf("Final do programa\n");
        }
    }



    return 0;
}
