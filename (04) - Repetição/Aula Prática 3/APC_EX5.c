/*Comparar alturar e mostrar maior e menor*/
/*Nome: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(){
    int i = 0, n_menor , n_maior, maior = 0, menor = 2000, n_atleta, altura;
    for(i; i < 10; i++){
        scanf("%i %i", &n_atleta, &altura);
        if (altura > maior){
            maior = altura;
            n_maior = n_atleta;
        }
        if(altura < menor){
            menor = altura;
            n_menor = n_atleta;
        }
    }
    printf("Numero do mais alto: %i \nSua altura:%i\n", n_maior, maior);
    printf("Numero do menos alto: %i \nSua altura:%i\n", n_menor, menor);
    return 0;
}
