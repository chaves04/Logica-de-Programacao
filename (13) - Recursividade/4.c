#include <stdio.h>
int Mdc(int a, int b){
    if (b == 0)
        return a;
    else
        return Mdc(b, a%b);

}

int main(void){

    int a, b, res;
    printf("Entre com o primeiro valor \n");
    scanf("%i", &a);
    printf("Entre com o segundo valor \n");    scanf("%i", &b);
    res = Mdc(a, b);
    printf("%i", res);

    return 0;
}
