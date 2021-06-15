/*Fazer um algoritmo que leia três valores, determine e imprima o maior deles
Entradas: valor1, valor2, valor3
Saídas: Maior valor*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, valor3;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &valor2);
	printf("Digite o terceiro valor: \n");
	scanf("%d", &valor3);
	
	if (valor1>valor2 && valor1>valor3)
	   printf("\nO maior valor é: %d\n\n", valor1);
	else if (valor2>valor1 && valor2>valor3)
	   printf("\nO maior valor é: %d\n\n", valor2);
	else printf("\nO maior valor é: %d\n\n", valor3);
	
	system("pause");
	return 0;
}
