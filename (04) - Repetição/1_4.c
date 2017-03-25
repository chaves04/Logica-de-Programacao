#include <stdio.h>
#include <math.h>

int main() {
    int i, j, res;
    for (i=10; i<=20; i++){
        for (j=1; j<=10; j++){
            res = j*i;
            printf("%d \n", res);
        }
        printf("\n");
    }

    return 0;

}
