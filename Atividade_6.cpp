/*Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.
Entradas: N�mero inteiro
Sa�das: Par ou impar*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o valor do n�mero: \n");
	scanf("%d", &numero);
	
	if(numero%2==0) printf("Esse n�mero � Par.\n\n");
	else printf("Esse n�mero � Impar.\n\n");
	
	system("pause");
	return 0;
}
