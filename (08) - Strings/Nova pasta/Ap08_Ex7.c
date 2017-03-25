#include <stdio.h>

int main(void){

    int i, j, k, l, m, trocou;
    char fr[50], fraux[50], pnova[50], pvelha[50], paux[50];

    printf("Digite a palavra a frase:");
    scanf(" %[^\n]s%*c", fr);
    printf("Digite a palavra a ser procurada: ");
    scanf(" %[^\n]s%*c", pvelha);
    printf("Digite a palavra para substituir: ");
    scanf(" %[^\n]s%*c", pnova);

    i = 0;
    k = 0;
    trocou = 0;
    fraux[0] = '\0';
    while(i < strlen(fr) && trocou == 0){
        while(fr[i] == ' ' && i <= strlen(fr)){
        fraux[k] =fr[i];
        i++;
        k++;
        }
        paux[0] = '\0';
        j = 0;
        while(fr[i] != ' ' && i <= strlen(fr)){
            paux[j] = fr[i];
            i++;
            j++;
        }
        m = 0;
        while (paux[m] == pvelha[m]){
            m++;
        }
        l = 0;
        if (m-1 == strlen(paux)){
            while (pnova != '\0'){
                fraux[l] = pnova[l];
                l++;
            }
            fraux[l] = '\0';
            trocou = 1;
        }
        else{
            while (paux[l] != '\0'){
                fraux[l] = paux[l];
                l++;
            }
            fraux[l] = '\0';
        }
    }
    if (trocou == 1){
        while (i == strlen(fr)-1){
            fraux[i] = fr[i];
            i++;
        }
    }
    printf("%s %s",pnova ,fraux);

    return 0;
}
