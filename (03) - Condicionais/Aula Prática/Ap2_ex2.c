/* Modificar programa */
/* Aluno: Filipe Gonçalves */
/* Matrícula: 16/0120276 */
#include <stdio.h>

int main(void){
	
	int a, b;
	
	printf("Digite o 1 valor:\n");
	
	scanf("%d", &a);

	printf("Digite o 2 valor:\n");
	
	scanf("%d", &b);	
	
	if(a==b){
		printf("Numeros iguais = %d", a);
	}
	else{
		if(a > b){
			printf("Maior e %d", a);
		}
		else{
			printf("Maior e %d", b);
		}
		
		
		
	}	
		
	
	
	
	
	
	
	
	return (0);	
}