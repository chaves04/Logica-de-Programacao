/* Fórmula de Báskara*/
/* Aluno: Filipe Gonçalves*/
/* Matrícula: 16/0120276 */
#include <stdio.h>
#include <math.h>

int main(void) {

	float raiz1, raiz2, delta, discriminante;
	
	int a,b,c;
	
	printf("Entre com os coeficientes. Ex.: ax² + bx + c\n");
	
	scanf("%i %i %i", &a, &b, &c);
	
	discriminante = (pow(b,2) - (4*a*c));
	
	delta = sqrt(discriminante);
	
	
	if (discriminante < 0){
		
		printf("Discriminante menor do que 0");
		
	}
	else{
		
		raiz1 = (-(b) + delta)/(2*a);
	
		raiz2 = (-(b) - delta)/(2*a);
	
		printf("Raiz 1:%.2f\nRaiz2:%.2f\n", raiz1, raiz2);
	
	}
	
	return 0;
}