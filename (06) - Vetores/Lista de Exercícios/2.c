#include <stdio.h>

int Verificacao(int *vetor){
    int i;
    i = 0;
	if (vetor[i] > vetor[i+1]){
		return 1;
	}
	else{
		return 0;
	}
}

void Leitura(int *vetor, int *qtd){
	int i;
	for(i = 0; i < *qtd; i++){
		scanf("%i", &vetor[i]);
	}

}

int main(void){

	int qtd;

	printf("Quantas vezes deseja repetir a acao? \n");
	scanf("%i", &qtd);
	int vetor[qtd];
	Leitura(&vetor, &qtd);
	if(Verificacao(&vetor) == 0){
		printf("E' crescente! \n");
	}
	else{
		printf("E' decrescente! \n");
	}




	return 0;
}
