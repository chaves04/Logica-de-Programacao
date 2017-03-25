#include <stdio.h>
#include <math.h>

int main(void) {

	float raiz1, raiz2;
	
	int a,b,c;
	
	printf("Entre com os coeficientes. Ex.: ax² + bx + c\n");
	
	scanf("%i %i %i", &a, &b, &c);
	
	raiz1 = (-(b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
	
	raiz2 = (-(b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
	
	printf("Raiz 1:%.2f\n Raiz2:%.2f\n", raiz1, raiz2);
	
	return 0;
}
