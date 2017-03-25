#include <stdio.h>
#include <string.h>

int main(void){

    int i, j, cont, tamanho;
    char string_entrada[21], string_saida[21], aux;

    printf("Entre com a string de entrada \n");
    scanf(" %[^\n]s%", string_entrada);
    tamanho = strlen(string_entrada);
    j = 0;
    for (i = 0; i < tamanho; i++){
        cont = 0;
        aux = string_entrada[i];
        while(aux == string_entrada[i+1] && i < tamanho){
            i++;
            cont++;
        }
        if (cont > 0){
            string_saida[j] = '0' + (cont+1);
            string_saida[j+1] = aux;
            j += 2;
        }
        else{
            string_saida[j] = aux;
            j++;
        }

    }


    string_saida[j] = '\0';
    printf("%s", string_saida);
    return 0;
}
