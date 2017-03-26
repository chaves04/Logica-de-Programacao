/*Reorganizar vetor, tirando os valores iguais a 0 e substituindo por -1 no final*/
/*Aluno: Filipe Gon�alves*/
/*Matr�cula: 16/0120276*/

#include <stdio.h>

void Mostrar(int *vetor){
    int i;
    i = 0;
    for(i = 0; i < 15; i++){
        printf("%i ", vetor[i]);
    }
}

void Troca(int *vetor){
    int i, j,aux;
    for(i = 0; i < 15; i++){
        if (vetor[i] == 0){
            vetor[i] = -1;
        }
    }
    for(i = 0; i < 15; i++){
        if (vetor[i] == -1){
        j = i;
            for(j ; j < 15; j++){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

}

void Leitura(int *vetor){
    int i;
    for(i = 0; i < 15; i++){
        scanf("%i", &vetor[i]);
    }
}


int main(void){
    int vetor[15];
    printf("Entre com os valores do vetor \n");
    Leitura(&vetor);
    Troca(&vetor);
    printf("Vetor Compactado! \n");
    Mostrar(&vetor);
    printf("\n");


    return 0;
}
