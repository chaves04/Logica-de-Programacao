#include <stdio.h>
#include <string.h>

void Palavra_repetida(char string_1[], char string_2[]){
    printf("%s\n%s\n", string_1, string_2);

}

int main(void){

    char string_1[21], string_2[21];

    printf("Digite a primeira String \n");
    scanf(" %[^\n]s%", string_1);
    printf("Digite a segunda String \n");
    scanf(" %[^\n]s%", string_2);
    Palavra_repetida(string_1, string_2);


    return 0;
}
