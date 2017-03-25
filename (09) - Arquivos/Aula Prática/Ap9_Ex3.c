#include <stdio.h>

int main(void){

    FILE *fp;
    FILE *fb;

    int codigo;
    char nome_arquivo[20], nome_novo_arquivo[20], nome[20];
    float notas[3];

    printf("Qual o nome do arquivo que deseja abrir?\n");
    scanf(" %[^\n]", nome_arquivo);
    printf("Qual o nome do novo arquivo a ser criado?\n");
    scanf(" %[^\n]", nome_novo_arquivo);
    fp = fopen(nome_arquivo,"r");
    if (fp == NULL){
        printf("Arquivo nao existente!\n");
    }
    else{
        fb = fopen(nome_novo_arquivo, "w");
        while ((fscanf(fp, "%i %f %f %f %s", &codigo, &notas[0], &notas[1], &notas[2], &nome)) > 0){
            fprintf(fb, "%i %.2f\n", codigo, (notas[0]+notas[1]+notas[2])/3);
        }
        fclose(fp);
    }



    return 0;
}
