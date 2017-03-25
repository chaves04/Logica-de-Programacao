#include <stdio.h>

int main(void){

    float numeros[2];
    char caracter;

    printf("Digite o caracter da operacao: '+', '-', '*' e '/')\n");
    scanf("%c", &caracter);
    printf("Digite os numeros da operacao\n");
    scanf("%f %f", &numeros[0], &numeros[1]);


    switch (caracter)
        {
        case '+':
            printf("Resultado final: %f", numeros[0]+numeros[1]);
            break;
        case '-':
            printf("Resultado final: %f", numeros[0]-numeros[1]);
            break;
        case '*':
            printf("Resultado final: %f", numeros[0]*numeros[1]);
            break;
        case '/':
            if (numeros[1] > 0){
                printf("Resultado final: %f", numeros[0]/numeros[1]);
                break;
            }
            else{
                printf("Erro! Divisao por 0 invalida");
                break;
            }
        default:
            printf("Erro! Opcao invalida");
            break;
        }









    return 0;
}
