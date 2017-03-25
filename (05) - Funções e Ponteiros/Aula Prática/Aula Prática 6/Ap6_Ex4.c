/*Programa com múltiplas funções para ler código e notas de um aluno e determinar a média*/
/*Aluno: Filipe Gonçalves*/
/*MAtrícula: 16/0120276*/
#include <stdio.h>

int Media(int a, int b, int c, int media){
    return ((a*3)+(b*3)+(c*4))/10;
}

void Leitura(int* a, int* b, int* c, int* codigo, int* media){

    printf("Qual o codigo do aluno?\n");
    scanf("%i", &*codigo);
    printf("Entre com as notas do aluno\n");
    scanf("%i %i %i",&*a, &*b, &*c);
    printf("A media e': %i\n", Media(*a, *b, *c, *media));

}


int main(void){
    int qt_aluno,i, a, b, c, codigo, media;

    printf("Quantos alunos deseja calcular a Media de provas?\n");
    scanf("%i", &qt_aluno);
    for(i = 0; i < qt_aluno; i++){
        Leitura(&a, &b, &c, &codigo, &media);

    }


    return 0;
}
