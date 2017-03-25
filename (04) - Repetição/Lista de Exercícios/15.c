#include <stdio.h>
#include <string.h>

int main(void){

    int idade, tempo, quant_filhos, soma_f,i, menor_tempo,menor_tempo_novo, mais_novo, sem_filhos;
    float salario, salario_maior, salario_mais_novo, soma_salario, salario_medio;
    char nome[20], nome_maior_salario[20], nome_menor_tempo[20], nome_mais_novo[20];

    salario_medio = 0;
    sem_filhos = 0;
    soma_salario = 0;
    menor_tempo_novo = 100;
    menor_tempo = 100;
    salario_maior = 0;
    soma_f = 0;
    for(i = 0; i < 3; i++){

        scanf("%s", nome);
        scanf("%f", &salario);
        scanf("%i %i %i", &idade, &tempo, &quant_filhos);

        soma_f += quant_filhos;
        soma_salario += salario;

        if(quant_filhos == 0){
            sem_filhos++;
            salario_medio += salario;
        }


        if(salario > salario_maior){
            salario_maior = salario;
            strcpy(nome_maior_salario, nome);
        }

        if(quant_filhos < 1){
            if(tempo < menor_tempo){
                strcpy(nome_menor_tempo, nome);
            }
        }

        if (tempo < menor_tempo_novo){
            strcpy(nome_mais_novo, nome);
            salario_mais_novo = salario;
            mais_novo = tempo;
        }
    }


    printf("Nome da pessoa com melhor salario: %s. E seu salario: R$%.2f\n", nome_maior_salario, salario_maior);
	printf("Numero medio de filhos e': %.2f\n", (float)soma_f/3);
	printf("Nome da pessoa com menor tempo de casa: %s\n", nome_menor_tempo);
	printf("Nome: %s Salario: %.2f Tempo:%i do mais novo\n", nome_mais_novo, salario_mais_novo, mais_novo);
	printf("Numero de empregados sem filhos: (%i) e Media salarial deles: R$ %.2f\n", sem_filhos, salario_medio/sem_filhos);
	printf("Media total dos salarios: R$ %.2f\n", soma_salario/i);



    return 0;
}
