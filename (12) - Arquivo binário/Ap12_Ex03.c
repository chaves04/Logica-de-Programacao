/*
Algoritmo: Mostrar dados do arquivo binário gerado no item anterior
Matrícula: 160120276
Aluno: Filipe Gonçalves Botelho
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char depto[30], nome[30];
    float salario;

}tipoDadosFunc;

int main(void){
    FILE *fp;
    tipoDadosFunc funcionario;
    char nomearq[30] = "arquivo.bin";
    int cont;

    cont = 0;
    fp = fopen(nomearq, "rb");
    while (fread(&funcionario, sizeof(tipoDadosFunc), 1, fp) != 0){
        printf("Codigo: %i\n", funcionario.cod);
        printf("Departamento: %s\n", funcionario.depto);
        printf("Nome: %s\n", funcionario.nome);
        printf("Salario: R$%.2f\n", funcionario.salario);
        printf("\n");
        cont++;
    }
    printf("Qtd. de funcionarios: %i \n", cont);
    getchar();
    fclose(fp);



    return 0;
}
