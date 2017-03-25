#include <stdio.h>
#include <string.h>

void Copiar(char string_1[], char string_2[], int *i, int *n){
    int j;

    j = 0;
    while(j <= *n){
        string_2[j] = string_1[*i];
        j++;
        (*i)++;

    }
    string_2[j] = '\0';

}

int main(void){

    char string_1[21], string_2[21];
    int i, n;

    printf("Digite a primeira String \n");
    scanf(" %[^\n]s%", string_1);
    printf("Digite a partir de qual posicao comecar \n");
    scanf("%i", &i);
    printf("Digite a quantidade de numeros a serem copiados \n");
    scanf("%i", &n);
    //i -= 1;
    n -= 1;
    Copiar(string_1, string_2, &i, &n);
    printf("%s \n", string_2);

    return 0;
}
