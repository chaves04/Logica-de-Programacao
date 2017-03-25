/*Faça um programa que calcule o volume de um cilindro circular, sendo fornecidos pelo o usuário o raio e altura do mesmo. (Obs:V=π*r2*h, onde π =3,14,r = raio e h= altura. 
Declare pi como sendo uma constante do tipo float.)*/
#include <stdio.h>
#include <math.h>

int main(void) {
	
	// Declara a variável "PI" constante do tipo float com o valor de 3,14 
	const float PI = 3.14;
	
	// Declara as variáveis "r" de raio e "h" de altura e "calc" para calcular
	float r, h, calc ;
	
	// Pede os valores ao usuário
	printf("Entre com o raio e a altura\n");
	
	// Ler os valores do usuário
	scanf("%f %f", &r, &h);
	
	// Realiza o cálculo do cilindro
	calc = PI*pow(r,2)*h;
	
	// Mostra o resultado do cálculo
	printf("O volume do cilindro e: %.2f\n", calc);
	
	return 0;
}
