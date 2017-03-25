/* Índice de poluição */
/* Aluno: Filipe Gonçalves */
/* Matrícula: 16/0120276 */
#include <stdio.h>

int main(void){

    float indice;

    printf("Digite os indices de poluicao\n");

    scanf("%f", &indice);

	if((indice >= 0.00) && (indice < 0.05)){

		printf("Abaixo do normal!");

	}

	else if ((indice >= 0.05) && (indice < 0.25)){

		printf("Normal!\n");

	}
	else if ((indice >= 0.25) && (indice < 0.30)){

		printf("Alerta!\n");

	}

    else if ((indice >= 0.30) && (indice < 0.40)){

        printf("Indústrias da lista A: suspensas\n");

    }

    else if ((indice >= 0.40) && (indice < 0.50)){

        printf("Indústrias da lista A: suspensas\nIndústrias da lista B: suspensas\n");

    }

    else{

        printf("Indústrias da lista A: suspensas\nIndústrias da lista B: suspensas\nIndústrias da lista C: suspensas\n");
        
    }




    return 0;
}