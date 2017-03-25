#include <stdio.h>

void Maior(int *vetor){
	int i, maior = 0;
	for(i = 0; i<20; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	printf("O maior e': %i \n", maior);
}

void Leitura(int *vetor){
	int i;
	for(i = 0; i<20; i++){
		scanf("%i", &vetor[i]);
	}
}

int main(void){
	
	int vetor[20];

	Leitura(vetor);
	Maior(vetor);


	return 0;
}