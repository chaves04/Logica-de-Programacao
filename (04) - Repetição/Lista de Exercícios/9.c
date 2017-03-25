#include <stdio.h>

int main(void){

	float numero, passado = 0, presente, maior = 0;

	while ( numero != 0	){

		if(numero != 0){
			printf("Digite o numero\n");
			scanf("%f", &numero);
			presente = numero;
			if((presente+passado) > maior){
				maior = presente+passado;
			}
			passado=presente;
		}
	}

	printf("A maior sequencia consecutiva e': %.2f", maior);





    return 0;
}
