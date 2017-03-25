#include <stdio.h>

int main(void) {

	int cateto1, cateto2;
	float hipotenusa;
	
	printf("Entre com os valores dos catetos\n");
	
	scanf("%i %i", &cateto1, &cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("A hipotenusa e: %.2f", hipotenusa);



	return 0;
}
