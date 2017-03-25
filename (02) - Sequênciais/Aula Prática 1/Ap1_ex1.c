/* Faça um programa que leia dois números inteiros, a e b, troque o conteúdo desses números, e mostre os novos valores de a e b.(Utilize uma variável auxiliar para guardar temporariamente o valor de um dos números a fim de fazer a troca.)
 */
#include <stdio.h>

int main(void) {
	// Criação das variáveis
	int aux, a, b;
	
	// Pede para o usuário os valores
	printf("Entre com os valores A e B\n");
	
	//Ler os valores
	scanf("%i %i", &a, &b);
	
	// O valor de "a" vai para o "auxiliar"
	aux=a;
	
	// O valor de "b" vai para "a"
	a=b;
	
	// O valor de "a" vai para "b"
	b=aux;
	
	// Mostra os novos valores
	printf("Os novos valores sao: \nA: %i \nB:%i", a, b);
	
	return 0;
}
