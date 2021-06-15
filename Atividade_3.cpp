/*Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma 
figura geométrica onde cada lado é menor do que a soma dos outros dois lados).
Entradas: Valores 1, 2 e 3
Saída: Pode ou não ser um triângulo*/

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
	   printf("\nEssa figura é um triângulo.\n\n");
	else 
	   printf("\nEssa figura não é um triângulo.\n\n");
	
	system("pause");
	return 0;
}
