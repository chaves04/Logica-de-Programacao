/*A  B  C  Z
  1  2  3  100
  1  2  3  100
  1  2  3  4
  1  2  3  4*/
/*Aluno: Filipe Gonçalves*/
/*MAtrícula: 16/0120276*/
#include <stdio.h>

void TrocaValor (int *u,int *v,int *x,int *y){
	*u = 1;
	*v = 2;
	*x = 3;
	*y = 4;
}

int main(void){

	int a, b, c, z;
	a = 1;
	b = 2;
	c = 3;
	z = 100;
	printf("");
	printf("");
	TrocaValor(&a, &b, &c, &z);
	printf("a = %d, b = %d, c = %d, z = %d \n",a,b,c,z);
	return 0;
}