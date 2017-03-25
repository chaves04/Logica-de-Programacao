/*
Algoritmo: Gerar e gravar em um arquivo binário dados dos funcionários 
de uma empresa (salário, código, nome e departamento) enquanto o usuário quiser gravar.
Matrícula: 160120276
Aluno: Filipe Gonçalves Botelho
*/

#include <stdio.h>

typedef struct{
    int cod;
    char depto[30], nome[30];
    float salario;

}tipoDadosFunc;

int main(void){
    FILE *fp;
    tipoDadosFunc funcionario;
    char continuar, nomearq[30] = "arquivo.bin";

    continuar ='S';
    fp = fopen(nomearq, "wb");
    while(continuar == 's' || continuar == 'S'){

        printf("Digite o codigo do funcionario: \n");
        scanf("%i", &funcionario.cod);
        getchar();
        printf("Digite o departamento do funcionario: \n");
        scanf("%s", funcionario.depto);
        getchar();
        printf("Digite o nome do funcionario: \n");
        scanf("%s", funcionario.nome);
        printf("Digite o salario: \n");
        scanf("%f", &funcionario.salario);
        getchar();
        printf("Deseja continuar? \n");
        scanf("%c", &continuar);
        fwrite(&funcionario, sizeof(tipoDadosFunc), 1, fp);

    }
    fclose(fp);



    return 0;
}
