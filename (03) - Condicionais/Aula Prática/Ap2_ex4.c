/* Informar localalização do ponto (dentro, fora ou na linha) */
/* Aluno: Filipe Gonçalves */
/* Matrícula: 16/0120276 */
#include <stdio.h>

int main(void){

    int X, Y, a, b, A, L;

    printf("Entre com os pontos X, Y\n");

    scanf("%i %i", &X, &Y);

    printf("Entre com a altura 'A' e a largura 'L'\n");

    scanf("%i %i", &A, &L);

    printf("Entre com as coordenadas do ponto a,b\n");

    scanf("%i %i", &a, &b);

    if (a >= X && b >= Y && a <= (X + L) && b <= (Y + A) ){
            if (a > X && b > Y && a < (X + L) && b < (Y + A)){
                printf("Esta dentro do retangulo!\n");
            }
            else {
                printf("Esta em alguma linha do retangulo!\n");
            }
    }
    else {
        printf("Esta fora do retangulo!\n");
    }



    return 0;
}
