#include <stdio.h>


typedef struct {
	char nome[20];
	char sexo;
	int salario;
	int matricula;
	char endereco[20];
	char cargo[20];
} Dados;



int main(void) {
	int tamanho, i, soma_salario, soma_salario_feminino, soma_salario_masculino, cont_feminino, cont_masculino;
	Dados registro[100];

	printf("Qual o tamanho do registro? \n");
	scanf("%i", &tamanho);

	for(i = 0; i < tamanho; i++){
        getchar();
		printf("Qual o nome do funcionario? \n");
		scanf("%[^\n]s%", registro[i].nome);
		getchar();
		printf("Qual o sexo do funcionario? M ou F\n");
		scanf("%c", &registro[i].sexo);
		getchar();
		printf("Qual o salario? \n");
		scanf("%i", &registro[i].salario);
		printf("Qual a matricula? \n");
		scanf("%i", &registro[i].matricula);
        getchar();
		printf("Qual o endereço? \n");
		scanf("%[^\n]s%", registro[i].endereco);
		getchar();
		printf("Qual o cargo? \n");
		scanf("%[^\n]s%", registro[i].cargo);
		getchar();
	}

	cont_feminino = 0;
	cont_masculino = 0;
	soma_salario = 0;
	soma_salario_feminino = 0;
	soma_salario_masculino = 0;
	for(i = 0; i< tamanho; i++){
		if (registro[i].sexo == 'F' || registro[i].sexo == 'f'){
			soma_salario_feminino += registro[i].salario;
			cont_feminino++;
		}
		else{
			soma_salario_masculino += registro[i].salario;
			cont_masculino++;
		}
		soma_salario += registro[i].salario;

	}
	printf("\nSalario medio das mulheres da empresa e': %.2f \n", (float)soma_salario_feminino/cont_feminino);
	printf("Salario medio os homens da empresa e': %.2f \n", (float)soma_salario_masculino/cont_masculino);
	printf("Salario medio dos funcionarios da empresa e': %.2f \n", (float)soma_salario/tamanho);


	return 0;
}
