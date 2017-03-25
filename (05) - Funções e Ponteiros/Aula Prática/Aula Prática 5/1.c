/*Copiar e Corrigir*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

float fat(int x){
    int i;
    int p;

    p=1;
    for(i=1;i<=x;i++){
        p=p*i;
    }
    return p;
}

int main(void){
    int n,k;
    float c;

    printf("Forneca o valor de n: ");
    scanf("%d", &n);
    printf("\n");

    printf("Forneca o valor de k: ");
    scanf("%d", &k);
    printf("\n");

    c=fat(n)/(fat(k)*fat(n-k));
    printf("%f\n",c);


    return (0);
}