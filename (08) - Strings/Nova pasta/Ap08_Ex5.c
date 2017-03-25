#include <stdio.h>

int main(){

    int i, numero, pos;
    char string_1[21], string_2[21];

    printf("Digite a String:");
    scanf(" %[^\n]s%*c", string_1);
    printf("Quantos caracteres deseja copiar? \n");
    scanf("%i", &numero);
    printf("Qual a posicao? \n");
    scanf("%i", &pos);

    i = 0;
    while(i < numero){
        string_2[i] = string_1[pos-1+i];
        i++;
    }
    string_2[i] = '\0';
    printf("%s", string_2);

    return 0;
}
