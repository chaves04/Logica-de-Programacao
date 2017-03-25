/*Calcular mes com a maior e menor temperatura media*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

void Verificacao(int *meses,int *maior,int *menor, int *m_menor, int *m_maior){
    int i;
    for (i = 0; i < 12; i++){
            if(meses[i] > *maior){
                *maior = meses[i];
                *m_maior = i+1;
            }
            else if(meses[i] < *menor){
                *menor = meses[i];
                *m_menor = i+1;
            }

    }
}

void Leitura(int *meses){
    int i;
    printf("Entre com as temperaturas medias de cada mes \n");
    for(i = 0; i < 12; i++){
        scanf("%i", &meses[i]);
    }
}

int main(void){

    int meses[12], maior = 0, menor, m_menor, m_maior;
    Leitura(&meses);
    Verificacao(&meses, &maior, &menor, &m_menor, &m_maior);
    printf("Menor = %i Mes = %i \nMaior = %i Mes = %i", menor, m_menor, maior, m_maior);

    return 0;
}
