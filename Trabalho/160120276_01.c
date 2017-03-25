/*Universidade de Brasilia

Instituto de Ciencias Exatas

Departamento de Ciencia da Computacao

Algoritmos e Programacao de Computadores – 0/2017

Aluno(a): Filipe Goncalves Botelho

Matricula: 16/0120276

Turma: VERAO

Versao do compilador: GCC 4.9.2 - CodeBlocks 16.01

Descricao: Jogo da forca. O usuario possui 7 chances para descobrir
a palavra e cada erro desconta ponto. Se ele nao descobrir, encerra-se
o jogo, caso ele descubra ele pode optar por encerrar a partida com os
pontos ganhos ou continuar para ganhar mais pontos */

#include <stdio.h>
#include <stdlib.h>

/*Verifica se o jogador completou a forca. Se tiver, pergunta se deseja continuar jogando*/
int Verificar_jogo(char palavra_decifrada[], int *tamanho, int *pontos, int *pontuacao_total, int *ganhou, char *continuar){
    int i, j;
    i = 0;
    while (palavra_decifrada[i] != '_' && *ganhou == 0){
        i++;
        if (i == *tamanho){
            printf("Parabens!\n");
            printf("Voce decifrou a palavra e acumulou %i pontos\n", *pontos);
            *pontuacao_total = *pontuacao_total + *pontos;
            printf("Pontuacao Total: %i\n", *pontuacao_total);
            printf("");
            for(j = 0; j < 60; j++){
                printf("* ");
            }
            printf("\n");
            printf("Deseja continuar jogando? (S/N)\n\n");
            scanf(" %c", &*continuar);
            for(j = 0; j < 60; j++){
                printf("* ");
            }
        return 1;

        }
    }
    return 0;
}

/*Compacta o alfabeto, retirando as letras ja digitadas*/
void Compactar(char *letra_digitada, char alfabeto[]){
    int i;
    i = 0;
    while (*letra_digitada != alfabeto[i]){
        i++;
    }
    alfabeto[i] = '0';
    printf("\n");
}

/*Verifica se a letra que o jogador digitou possui na forca.*/
void Verificar_Palavra(char *letra_digitada, char *palavra_alvo,char palavra_decifrada[],int *pontos,int *pontos_total, int *tentativas,int *tamanho){
    int i, encontrou;
    i = 0;
    while (palavra_alvo[i] != '\0'){
        if (palavra_alvo[i] == *letra_digitada){
            printf("Acerto! \n");
            palavra_decifrada[i] = *letra_digitada;
            *pontos_total = *pontos_total + (*pontos / *tamanho);
            encontrou = 1;
        }
        i++;
    }

    if (encontrou != 1){
        *pontos = *pontos - 5;
        *tentativas = *tentativas + 1;
        printf("Letra incorreta!!! Voce ainda tem %i chances!", 7-*tentativas);
    }

}

/*Função responsavel pelo cabecalho do jogo. Enquanto a palavra nao for completa,
ela e acionada E enquanto o numero de tentativas for menor que 7. Nela serao
apresentadas a pontuacao acumulada e pontos a receber pela palavra atual, bem como
a quantidade de tentativas que o usuario ja errou. Alem disso, apresenta o alfabeto atualizado,
eliminando as letras já tentadas*/
void Cabecalho(int *pontos_total,int *pontos,char palavra_alvo[], char palavra_decifrada[], char alfabeto[], int *tamanho, char *letra_digitada,int *tentativas){
    int i;
    printf("\n*** JOGO DA FORCA *** \n");
    printf("PONTUACAO ACUMULADA: %i\n", *pontos_total);
    printf("PONTOS A RECEBER POR ESTA PALAVRA: %i\n", *pontos);
    printf("1-cabeca,  2-tronco,  3-braco direito,  4-braco esquerdo,  5-perna direita e 6-perna esquerda \n");
    if (*tentativas > 0){
        for (i = 0; i < *tentativas; i++){
            printf("%i ", i+1);
        }

    }
    printf("\n\n\n");
    for(i = 0; i < *tamanho; i++){
        printf("%c ", palavra_decifrada[i]);
    }
    printf("\n\n");
    for (i = 0; i < 27; i++){
        if (alfabeto[i] != '0'){
            printf("%c ", alfabeto[i]);
        }
    }
    printf("\nEscolha uma das letras acima para decifrar a palavra: ");
    scanf(" %c", &*letra_digitada);
    for(i = 0; i < 60; i++){
        printf("* ");
    }
    printf("\n\n");


}

/*Função responsavel por codificar a palavra em '_', igualmente ao tamanho da palavra*/
void codificador(char palavra_alvo[], char palavra_decifrada[], int *tamanho){
    *tamanho = 0;
    while(palavra_alvo[*tamanho] != '\0'){
        palavra_decifrada[*tamanho] = '_';
        *tamanho += 1;
    }
}

int main(void){
    /*Declara as variaveis*/
    FILE *fp;
    int pontos_total, pontuacao_total,pontos, perdeu,tentativas, continua, tamanho, ganhou, i;
    char palavra_alvo[21], palavra_decifrada[21], letra_digitada, continuar;
    char alfabeto[27] = {'A', ' B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','\0'};

    /*Abre o arquivo "palavras.txt" em modo de leitura*/
    fp = fopen("palavras.txt","r");
    /*Declara os contadores iguais a zero OU 'S' para não pegar lixo de memoria*/
    i = 0;
    continuar = 'S';
    ganhou = 0;
    pontuacao_total = 0;
    pontos_total = 0;
    tentativas = 0;
    continua = 0;

    /*Enquanto a leitura do arquivo não terminar E o modo continuar estiver
    como 'S' E a quantidade de partidas jogadas for menor que 25, então assim
    ele irá iniciará o jogo*/
    while(fscanf(fp, "%s %i", &palavra_alvo, &pontos) != EOF && continuar == 'S' && i < 25 && tentativas < 7){
        char alfabeto[27] = {'A', ' B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','\0'};
        codificador(palavra_alvo, palavra_decifrada, &tamanho);
        tentativas = 0;
        /*Enquanto as tentativas do usuario for menor que 7, ele poderá continuar tentando*/
        while(tentativas < 7){
            if (ganhou == 0){
                Cabecalho(&pontos_total,&pontos ,palavra_alvo, palavra_decifrada, alfabeto, &tamanho, &letra_digitada, &tentativas);
                Verificar_Palavra(&letra_digitada, palavra_alvo,palavra_decifrada, &pontos, &pontos_total, &tentativas, &tamanho);
                Compactar(&letra_digitada, alfabeto);
            }
            ganhou = Verificar_jogo(palavra_decifrada,&tamanho,&pontos, &pontuacao_total,&ganhou, &continuar);
            if (ganhou == 1 && continuar == 'S' || continuar == 'N'){
                break;
            }
            getchar();
        }
        i++;
        system("cls");
    }
    getchar();
    return 0;
}
