/*Multiplicação*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int Multiplicacao(int a, int b){
    int soma;
    soma = 0;
    while(a > 0){
            if(a%2 == 1){
                soma = b + soma;
                a = a/2;
                b = b*2;
            }
            else{
                a = a/2;
                b = b*2;
            }
    }
    return soma;
}

int main(void) {

	int a, b, soma;

	printf("Entre com os numeros A e B\n");
	scanf("%i %i", &a, &b);
	printf("A multiplicacao e': %i", Multiplicacao(a,b));
	return 0;
}
