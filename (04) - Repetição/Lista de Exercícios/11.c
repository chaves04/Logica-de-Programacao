#include <stdio.h>

int main(void){

    int soma_f, filho, percentual, socio;
    float salario, m_salario, soma_s;

    socio = 0;
    percentual = 0;
    m_salario = 0;
    soma_s = 0;
    soma_f = 0;
    while (salario >= 0){
        scanf("%f %i", &salario, &filho);
        if(salario >= 0){
            soma_s += salario;
            soma_f += filho;

            if (salario > m_salario){
                m_salario = salario;
            }

            if ( salario < 400){
                percentual++;
            }

            socio++;
        }
    }

    printf("Media de salario: %.2f\n", (float)soma_s/socio);
    printf("Media de filho: %.2f\n", (float)soma_f/socio);
    printf("Maior salario: %.2f\n", m_salario);
    printf("Percentual de pessoas que recebem abaixo de 400 reais: %.2f%%\n", (float)percentual/socio*100);


    return 0;
}
