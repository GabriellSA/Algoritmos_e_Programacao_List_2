/*Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.
Entradas: Número inteiro
Saídas: Par ou impar*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o valor do número: \n");
	scanf("%d", &numero);
	
	if(numero%2==0) printf("Esse número é Par.\n\n");
	else printf("Esse número é Impar.\n\n");
	
	system("pause");
	return 0;
}
