/* Verificar se há uma linha igual a do vetor informado*/
/*Aluno: Filipe Gonçalves Botelho*/
/*Matrícula: 16/0120276*/
#include <stdio.h>
#define LINHA 5
#define COLUNA 5

int Verificacao(int matriz[][COLUNA], int vetor[]){
	int i, j;
	i = 0;
	while (i < LINHA){
		j = 0;
		while (j < COLUNA && matriz[i][j] == vetor[j]){
			j++;
		}
		i++;
		if (j == COLUNA){
			return i;
		}else{
			return -1;
		}

	}

}

void Leitura_vetor(int vetor[]){
    int i;
    for (i = 0; i < LINHA; i++){
        scanf("%i", &vetor[i]);
    }
}

void Leitura_matriz(int matriz[][COLUNA]){
    int i, j;
    printf("Leitura da matriz! \n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("Entre com %ia linha %ia coluna da matriz: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

}

int main(void){

    int matriz[LINHA][COLUNA], vetor[LINHA], cont;

    Leitura_matriz(matriz);
    Leitura_vetor(vetor);
    cont = Verificacao(matriz, vetor);
    printf ("%ia linha \n", cont);

    return 0;
}
