/*Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma 
figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).
Entradas: Valores 1, 2 e 3
Sa�da: Pode ou n�o ser um tri�ngulo*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2, valor3;
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &valor2);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &valor3);
	
	if(valor1<valor2+valor3 && valor2<valor1+valor3 && valor3<valor2+valor1)
	   printf("\nEssa figura � um tri�ngulo.\n\n");
	else 
	   printf("\nEssa figura n�o � um tri�ngulo.\n\n");
	
	system("pause");
	return 0;
}
