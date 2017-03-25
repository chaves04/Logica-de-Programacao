#include <stdio.h>

int main(void){

    char nome_suco[3][20];

    float precos[3];

    printf("Digite o nome dos sucos\n");
    gets(nome_suco[0]);
    gets(nome_suco[1]);
    gets(nome_suco[2]);
    printf("Digite os precos dos sucos, respectivamente\n");
    scanf("%f %f %f", &precos[0], &precos[1], &precos[2]);

    if (precos[0] < precos[1] && precos[0] < precos[2]){
        printf("Suco %s", nome_suco[0]);
    }
    else if (precos[1] < precos[0] && precos[1] < precos[2]){
        printf("Suco %s", nome_suco[1]);
    }
    else{
        printf("Suco %s", nome_suco[2]);
    }







    return 0;
}
