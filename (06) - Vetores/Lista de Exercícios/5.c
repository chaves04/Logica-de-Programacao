/*Ler dois vetores e organiza eles por união e intersecção*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

void Mostrar(int *vetor){
	int i;
	for (i = 0; i<20; i++){
        printf("%i ", vetor[i]);
    }
}

void Uniao(int *vetor_x, int *vetor_y, int *vetor_u){
    int i;
    for(i = 0; i<10; i++){
        vetor_u[i] = vetor_x[i];
        vetor_u[i+10] = vetor_y[i];
    }

}

void Interseccao(int *vetor_x, int *vetor_y, int *vetor_i){
    int i,j;
    j = 0;
    for(i = 0; i<20; i = i+2){
        vetor_i[i] = vetor_x[j];
        j++;
    }
    j = 0;
    for(i = 1; i<20; i = i+2){
        vetor_i[i] = vetor_y[j];
        j++;
    }
}

void Leitura(int *vetor){
    int i;
    for(i = 0; i<10; i++){
        scanf("%i", &vetor[i]);
    }
}

int main(void){

    int vetor_x[10], vetor_y[10], vetor_u[20], vetor_i[20], i;
    printf("Entre com os elementos do primeiro vetor\n");
    Leitura(&vetor_x);
    printf("Entre com os elementos do segundo vetor\n");
    Leitura(&vetor_y);
    Uniao(&vetor_x, &vetor_y, &vetor_u);
    Interseccao(&vetor_x, &vetor_y, &vetor_i);
    printf("Uniao dos vetores\n");
    Mostrar(&vetor_u);
    printf("\nInterseccao dos vetores\n");
    Mostrar(&vetor_i);


    return 0;
}
