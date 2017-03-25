/*Soma de números pares*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int SomaPares(int y){
	int i, soma;
	soma = 0;
	for (i = 0; i <= y;i++){
		if (i%2 == 0){
			soma = soma + i;
		}	
	}
	return soma;
}

int main(void) {
	
	int numero;
	
	printf("Digite o numero\n");
	scanf("%i", &numero);
	if (numero > 0){
	printf("A soma de 0 ate %i e': %i", numero, SomaPares(numero));
	}
	else{
		printf("Numero nao e' Positivo!");
	}
	return 0;
}
