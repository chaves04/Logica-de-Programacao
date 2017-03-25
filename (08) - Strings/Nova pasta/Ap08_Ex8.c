#include <stdio.h>
#include <string.h>
Inversao(char string[]){
    int i, j, m, tamanho;
    char string_inv[21], string_aux[21];


    i = 0;
    while (string[i] != '\0'){
        j = 0;
        while (string[i] != ' ' && string[i] != '\0'){
            string_aux[j] = string[i];
            j++;
            i++;
        }
        string_aux[j] = '\0';
        m = 0;
        tamanho = strlen(string_aux);
        while(m < tamanho){
            string_inv[tamanho-1-m] = string_aux[m];
            m++;
        }
        string_inv[m] = '\0';
        printf("%s ", string_inv);
        i++;
    }
}

int main(void){

    char string[21], string_2[21];

    printf("Digite a string \n");
    scanf(" %[^\n]s%*c", string);
    Inversao(string);

    return 0;
}
