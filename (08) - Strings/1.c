#include <stdio.h>
#include <string.h>

int main(void){

    char string_1[21], string_2[21], string_3[41];
    int i, j, k;

    scanf(" %[^\n]s%", string_1);
    scanf(" %[^\n]s%", string_2);
    i = 0;
    while (string_1[i] != '\0'){
        string_3[i] = string_1[i];
        i++;
    }
    string_3[i] = ' ';
    j = 0;
    while (string_2[j] != '\0'){
        i++;
        string_3[i] = string_2[j];
        j++;
    }
    string_3[i+1] = '\0';

    printf(" %s", string_3);


    return 0;
}
