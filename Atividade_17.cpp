/*Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.
Entradas: Ano de nascimento e ano atual
Sa�das: Nome e dias vividos*/

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
	printf("\nVoc� j� viveu %d dias\n\n", dias);
	
	system("pause");
	return 0;
}
