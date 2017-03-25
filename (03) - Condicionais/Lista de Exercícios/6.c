#include <stdio.h>

int main(void){

    int branco, nulo, valido;
    float calc[4];

    printf("Digite o numero de votos brancos\n");
    scanf("%i", &branco);
    printf("Digite o numero de votos nulos\n");
    scanf("%i", &nulo);
    printf("Digite o numero de votos validos\n");
    scanf("%i", &valido);

    calc[0] = branco + nulo + valido;
    calc[1] = branco/calc[0]*100;
    calc[2] = nulo/calc[0]*100;
    calc[3] = valido/calc[0]*100;

    printf("O percentual de votos brancos: %.2f%%\n", calc[1]);
    printf("O percentual de votos nulos: %.2f%%\n", calc[2]);
    printf("O percentual de votos validos: %.2f%%\n", calc[3]);




    return 0;
}
