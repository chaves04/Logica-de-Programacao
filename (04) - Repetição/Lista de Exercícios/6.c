#include <stdio.h>

int main(void){

    int a[5], b[5], i, j = 0;

    for(i = 0; i < 5; i++){
        do{
            printf("Digite os numeros A e B\n");
            scanf("%i %i", &a[i], &b[i]);
        }while((a > 0 && b > 0 && a < b));
        for(a[i]; a[i] <= b[i]; j++){
            if(a[i]%2 == 0){
            printf("%i\n", a[i]);
            }
            a[i]+=1;
        }
    }










    return 0;
}
