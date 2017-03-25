#include <stdio.h>
#include <string.h>

int main(void){

    int i, aux;
    char string_1[21], string_2[21], string_t[41];

    printf("Digite a primeira String: \n");
    scanf(" %[^\n]s%*c", string_1);
    printf("Digite a psegunda String: \n");
    scanf(" %[^\n]s%*c", string_2);
    aux = strlen(string_1);
    //printf("%i", aux);

    i = 0;
    while (string_1[i] != '\0' && string_2[i] != '\0'){
        string_t[i] = string_1[i];
        string_t[aux+i] = string_2[i];
        i++;
    }
    string_t[aux+i] = '\0';
    printf("%s", string_t);
    return 0;
}
