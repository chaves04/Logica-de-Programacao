#include <stdio.h>

int main(void) {
	float notas[3], calc;
	int pesos[3];
	
	
	printf("Entre com os valores das notas");
	
	scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);
	
	printf("Entre com os valores dos pesos");
	
	scanf("%i %i %i", &pesos[0], &pesos[1], &pesos[2]);
	
	calc = (notas[0]*pesos[0])+(notas[1]*pesos[1])+(notas[2]*pesos[2])/(pesos[0]+pesos[1]+pesos[2]);
	
	printf("A media e: %.2f", calc);
	
	return 0;
}
