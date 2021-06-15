/*Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, 
então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.
Entradas: Ano de nascimento e ano atual
Saídas: Nome e dias vividos*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int AnoNasc, AnoAtual, dias;
	
	printf("Digite seu ano de nascimento: \n");
	scanf("%d", &AnoNasc);
	printf("Digite o ano atual: \n");
	scanf("%d", &AnoAtual);
	
	dias=(AnoAtual-AnoNasc)*365;
	printf("\nVocê já viveu %d dias\n\n", dias);
	
	system("pause");
	return 0;
}
