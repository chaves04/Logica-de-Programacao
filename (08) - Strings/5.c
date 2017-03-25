#include <stdio.h>
#include <string.h>

int main(void){

    int i, tamanho;
    char nome[21], nome_inv[21];

    printf("Digite o nome \n");
    scanf(" %[^\n]s%", nome);
    tamanho = strlen(nome);
    for(i = 0; i < tamanho; i++){
        nome_inv[i] = nome[tamanho-1-i];

    }
    nome_inv[i] = '\0';
    printf("%s \n", nome_inv);


    return 0;
}
