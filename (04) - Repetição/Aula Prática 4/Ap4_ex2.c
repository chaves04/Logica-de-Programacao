#include <stdio.h>

int main(void){

    int i, j;

    i = 0;
    for(j = 1; j <= 5;j++){
        do{
            i++;
            printf("%d", i);
        }while (i < j);
        printf("\n");
    }
    getchar();

    return 0;
}
