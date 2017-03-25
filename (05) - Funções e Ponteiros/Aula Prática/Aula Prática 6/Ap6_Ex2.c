/**Maior e menor de três números/
/*Aluno: Filipe Gonçalves*/
/*MAtrícula: 16/0120276*/
#include <stdio.h>

void Maior_Menor(int* a, int* b, int* c, int* maior, int* menor){
    if (*a > *b && *a > *c){
        if(*b < *c){
            *maior = *a;
            *menor = *b;
        }
        else{
            *maior = *a;
            *menor = *c;
        }
    }
    else if(*b > *a && *b > *c){
        if(*a < *c){
            *maior = *b;
            *menor = *a;
        }
        else{
            *maior = *b;
            *menor = *c;
        }
    }
    else{
        if(*a < *b){
            *maior = *c;
            *menor = *a;
        }
        else{
            *maior = *c;
            *menor = *b;
        }
    }

}

int main (void){
    int a, b, c, maior, menor;

    printf("Entre com os valores de A, B e C\n");
    scanf("%i %i %i", &a, &b, &c);
    Maior_Menor(&a,&b,&c, &maior, &menor);
    printf("O maior e' %i e o menor %i\n", maior, menor);


    return 0;
}
