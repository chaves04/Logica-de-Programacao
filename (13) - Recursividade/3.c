#include <stdio.h>

int potencia(int base, int expoente){
    if(expoente==0)
        return 1;
    else
        return base * potencia(base,expoente-1);

}

int main(void){
    int base, expoente;

    printf("Entre com a Base e o Expoente \n");
    scanf("%i %i", &base, &expoente);
    printf("%i \n", potencia(base, expoente));

    return 0;
}
