/*
Algoritmo: Atualizar todos os salário do item anterior.
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
    FILE *fb;
    tipoDadosFunc funcionario;
    char nomearq[30] = "arquivo.bin", nomearq2[30] = "arquivo2.bin";
    fb = fopen(nomearq2,"wb");
    fp = fopen(nomearq,"rb");
    while (fread(&funcionario, sizeof(tipoDadosFunc), 1, fp) != 0){
        if (funcionario.salario < 1000){
            funcionario.salario = funcionario.salario * 1.30;
        }
        else if (funcionario.salario > 1000 && funcionario.salario < 5000){
            funcionario.salario = funcionario.salario * 1.20;
        }else{
            funcionario.salario = funcionario.salario * 1.10;
        }
        fwrite(&funcionario, sizeof(tipoDadosFunc), 1, fb);
    }
    fclose(fb);
    fclose(fp);

    fb = fopen(nomearq2,"rb");
    while(fread(&funcionario, sizeof(tipoDadosFunc), 1, fb) != 0){
        printf("Salario novo: %.2f \n", funcionario.salario);
    }
    fclose(fb);
    return 0;
}
