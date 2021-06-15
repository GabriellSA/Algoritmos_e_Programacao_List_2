/*Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome 
e a altura da menor delas.
Entradas: Nome e altura
Saídas: Nome e altura do menor*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct ficha_pessoa{
		char nome[50];
		float altura;
	};
	struct ficha_pessoa pessoa[3];
	
	printf("Digite o nome da primeira pessoa: \n");
	fflush(stdin);
	fgets(pessoa[0].nome, 50, stdin);
	printf("Digite a altura da primeira pessoa (centímetros): \n");
	scanf("%f", &pessoa[0].altura);
	system("cls");
	printf("Digite o nome da segunda pessoa: \n");
	fflush(stdin);
	fgets(pessoa[1].nome, 50, stdin);
	printf("Digite a altura da segunda pessoa (centímetros): \n");
	scanf("%f", &pessoa[1].altura);
	system("cls");
	printf("Digite o nome da terceira pessoa: \n");
	fflush(stdin);
	fgets(pessoa[2].nome, 50, stdin);
	printf("Digite a altura da terceira pessoa (centímetros): \n");
	scanf("%f", &pessoa[2].altura);
	system("cls");
	
	if(pessoa[0].altura<pessoa[1].altura && pessoa[0].altura<pessoa[2].altura)
	  printf("A pessoa com menor altura é %sCom %.2f centímetros de altura\n\n", pessoa[0].nome, pessoa[0].altura);
	else if (pessoa[1].altura<pessoa[0].altura && pessoa[1].altura<pessoa[2].altura)
	  printf("A pessoa com menor altura é %sCom %.2f centímetros de altura\n\n", pessoa[1].nome, pessoa[1].altura);
	else printf("A pessoa com menor altura é %sCom %.2f centímetros de altura\n\n", pessoa[2].nome, pessoa[2].altura);
	
	system("pause");
	return 0;
}
