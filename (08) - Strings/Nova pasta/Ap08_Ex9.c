#include <stdio.h>
#include <string.h>

Numero_inteiro(char string_lida[]){
    int i, j, vetor[21];
    j = 0;
    i = 0;
    while (string_lida[j] != '\0'){
        if (string_lida[j] == '0'){
            j++;
        }
        vetor[i] = string_lida[j] - '0';
        i++;
        j++;
    }
    vetor[i] = '\0';
    i = 0;
    while(vetor[i] != '\0'){
        printf("%i", vetor[i]);
        i++;
    }

}

int main(void){

    char string_lida[21];
    printf("String de entrada \n");
    scanf(" %[^\n]s%*c", string_lida);
    Numero_inteiro(string_lida);


    return 0;
}
