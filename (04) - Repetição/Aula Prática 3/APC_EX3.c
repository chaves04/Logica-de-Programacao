/*Imprimir média aritmética de idades*/
/*Nome: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void) {
	int pessoas, i, idade, soma = 0;
	printf("Digite o numero de pessoas\n");
	scanf("%i", &pessoas);
	for(i = 1; i <= pessoas; i++){
		scanf("%i", &idade);
		soma = soma + idade;
	}
	printf("%f", (float)soma/pessoas);
	return 0;
}
