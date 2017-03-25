/*Crie um programa que leia dois números inteiros (num1 e num2), calcule e mostre a media*/
#include <stdio.h>

int main(void) {
	
	//Criação de variáveis
	float calc;
	int num1, num2;
	
	// Pede ao usuário as notas
	printf("Digite as notas\n");
	
	// Ler as notas
	scanf("%i %i", &num1, &num2);
	
	// Calcula a media
	calc = (num1+num2)/2;
	
	// Mostra a media
	printf("A media aritmetica e: %.2f", calc);
	
	return 0;
}
