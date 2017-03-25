/* Determinar se é triângulo ou não, caso seja, determinar se é retângulo */
/* Aluno: Filipe Gonçalves */
/* Matrícula: 16/0120276 */
#include <stdio.h>

int main(void) {
	
	int lado_1, lado_2, lado_3;
	
	printf("Entre com os valores do triângulo\n");
	
	scanf("%i %i %i", &lado_1, &lado_2, &lado_3);
	
	if (lado_1 + lado_2 > lado_3 && lado_1 + lado_3 > lado_2 && lado_3 + lado_2 > lado_1){

		printf("E triangulo!\n");

		if (lado_1*lado_1 == (lado_2*lado_2)+(lado_3*lado_3) || lado_2*lado_2 == (lado_1*lado_1)+(lado_3*lado_3) || lado_3*lado_3 == (lado_2*lado_2)+(lado_1*lado_1)){
			
			printf("E triangulo retangulo\n");
			
		}
	}
	else{

		printf("Nao e triangulo!");

	}
	
	
	return 0;
}
