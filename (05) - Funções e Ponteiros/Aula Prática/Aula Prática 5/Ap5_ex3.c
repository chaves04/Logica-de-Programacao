/*Potenciação*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>
#include <math.h>

int res(int x, int y){
    return (pow(x,y));
}

int main(void){
    int base, potencia;
    printf("Digite a Base e a Potencia\n");
    scanf("%i %i", &base, &potencia);
    printf("O resultado e': %i\n", res(base,potencia));
    return 0;
}
