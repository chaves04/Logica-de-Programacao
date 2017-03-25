/* *****************************************
* Descrição : ler e imprimir os dados de n registros.
* n deve ser lido e ser menor do que 10.
* O programa principal somente chama as funções para ler
* Entrada : nome, idade, salario
* Saida : nome, idade, salario
*******************************************/
/*
Aluno: Filipe Gonçalves Botelho
Matrícula: 16/0120276
*/

#include <stdio.h>
typedef struct {
    int codigo;
    float salario;
    char nome[50], sexo[10], endereco[50], cargo[50];
} tipoDadosDeFuncionario;

void ledados (tipoDadosDeFuncionario *vetfunc, int *n){
    int i;
    printf("Informe o nro de funcionarios: ");
    scanf("%d", n);
    while ((*n < 1) || (*n > 10)){
        printf("\nERRO! O nro de funcionarios deve ser entre 1 e 10.");
        printf("\nTecle <enter> para continuar.");
        getchar();
        getchar();
        printf("\nInforme o nro de funcionarios: ");
        scanf("%d", n);
    }
    for (i = 0; i <(*n);i++){
        printf("\nInforme o nome: ");
        scanf("%s", vetfunc[i].nome);
        printf("\nInforme o cod: ");
        scanf("%i", &vetfunc[i].codigo);
        printf("\nInforme o sexo: ");
        scanf("%s", vetfunc[i].sexo);
        printf("\nInforme o cargo: ");
        scanf("%s", vetfunc[i].cargo);
    }
}

void mostradados (tipoDadosDeFuncionario *vetfunc, int n) {
    int i;
    for (i = 0; i < n; i++){
        printf("\n\nNome: %s", vetfunc[i].nome);
        printf("\nCod: %d", vetfunc[i].codigo);
        printf("\nSexo: %s", vetfunc[i].sexo);
        printf("\nCargo: %s", vetfunc[i].cargo);
    }
}

int main(void){
    tipoDadosDeFuncionario dadosDeFunc[10];
    int i, nrofunc;

    ledados(dadosDeFunc, &nrofunc);
    mostradados(dadosDeFunc, nrofunc);
    getchar();
    getchar();




    return 0;
}
