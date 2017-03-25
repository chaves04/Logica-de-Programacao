#include <stdio.h>

int main(void){

    int idade, maior_idade, menor_idade, quantidade_sexo_f, habitante;
    float salario, soma_salario;
    char sexo;

    soma_salario = 0;
    habitante = 0;
    quantidade_sexo_f = 0;
    maior_idade = 0;
    menor_idade = 1000;

    while (idade > 0){

            scanf("%i %c %f", &idade, &sexo, &salario);

        if(idade >= 0){
            habitante++;
            soma_salario += salario;

            if(sexo == 'F' || sexo == 'f'){
                if(salario < 1000){
                    quantidade_sexo_f++;
                }
            }

            if (idade > maior_idade)
                maior_idade = idade;

            if (idade < menor_idade)
                menor_idade = idade;
        }
    }

    printf("Media de salario: %.2f\n", (float)soma_salario/habitante);
    printf("Maior idade: %i\nMenor idade: %i\n",maior_idade, menor_idade);
    printf("Quantidade de mulheres com salario ate R$ 1000: %i\n", quantidade_sexo_f);



    return 0;
}
