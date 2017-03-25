#include <stdio.h>
int i = 0;

int Fibonacci(int f){
    ++i;
    if (f < 2)
        return 1;
    else
        return Fibonacci(f-1) + Fibonacci(f-2);
}

int main(void){
    int f;
    printf("Entre com o numero para calcular a sequencia de Fibonacci \n");
    scanf("%d", &f);
    printf("%d \n", Fibonacci(f));
    printf("%d", i);

    return 0;
}
