#include <stdio.h>

int main(void){

    int t, n, i, j, fat;

    printf("Informe 't'\n");
    scanf("%i", &t);
    for(i = 0; i < t; i++){
        printf("n = ");
        scanf("%i", &n);
        fat = 1;
        for(j = 1; j <= n; j++){
            fat *= j;
        }
        printf("%i\n",fat);
    }







    return 0;
}
