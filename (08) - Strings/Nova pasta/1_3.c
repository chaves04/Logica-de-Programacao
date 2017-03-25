#include <stdio.h>
#include <string.h>
int main(void){
    int i, j, k, l, m, tamanho, achou;
    char string_1[21], string_2[21], palavra[21], p_aux[21];
    printf("Digite a primeira frase: ");
    scanf(" %[^\n]s%", string_1);
    printf("Digite a segunda frase: ");
    scanf(" %[^\n]s%", string_2);

    tamanho = strlen(string_1);
    achou = 0;
    i = 0;
    while (i < tamanho && achou == 0){
        j = 0;
        while (string_1[i] != ' ' && i < tamanho){
            palavra[j] = string_1[i];
            i++;
            j++;
        }
        palavra[j] = '\0';
        k = 0;

        while (k < strlen(string_2) && achou == 0){
            l = 0;
            while(string_2[k] != ' ' && k < strlen(string_2)){
                p_aux[l] = string_2[k];
                k++;
                l++;
            }
            p_aux[l] = '\0';
            k++;

            if (j = l){
                m = 0;
                while (palavra[m] == p_aux[m] && m < i){
                    m++;
                }
                if(m == j){
                    printf("Palavra repetida: %s", palavra);
                    achou = 1;
                }

            }

        }
        i++;
    }

    getchar();
    return 0;
}
