#include <stdio.h>

int main(){

    int i = 0, n_menor , n_maior,maior = 0, menor = 2000, n_aluno, altura;

    for(i; i < 5; i++){

        scanf("%i %i", &n_aluno, &altura);

        if (altura > maior){
            maior = altura;
            n_maior = n_aluno;
        }

        if(altura < menor){
            menor = altura;
            n_menor = n_aluno;
        }
    }

    printf("Numero do mais alto: %i \nSua altura:%i\n", n_maior, maior);

    printf("Numero do menos alto: %i \nSua altura:%i\n", n_menor, menor);






    return 0;
}
