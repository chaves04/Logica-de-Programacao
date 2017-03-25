#include <stdio.h>

int main(void){

    float juliano = 1.10, gustavo = 1.40;
    int ano = 0;
    while(juliano <= gustavo){
        ano++;
        juliano = juliano + 0.17;
        gustavo = gustavo + 0.08;
    }

    printf("Anos necessarios para Juliano ultrapassar Gustavo: %i\n", ano);





    return 0;
}
