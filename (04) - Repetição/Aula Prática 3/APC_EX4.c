/*Tabuada de 10 a 20*/
/*Nome: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){
    int i , j, res;
    for(i = 10; i <= 20; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            res = i*j;
            printf("%i x %i = %i\n", i, j, res);
        }
        printf("\n");
    }
    return 0;
}
