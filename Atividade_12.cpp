/*Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual 
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o
Entradas: N�mero DDD
Sa�das: Cidade*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int DDD;
	
	printf("Digite o n�mero de DDD: \n");
	scanf("%d", &DDD);
	
	switch(DDD){
		case 61: printf("\nEsse DDD pertence a Bras�lia.\n\n");
		break;
		case 71: printf("\nEsse DDD pertence a Salvador.\n\n");
		break;
		case 11: printf("\nEsse DDD pertence a S�o Paulo.\n\n");
		break;
		case 21: printf("\nEsse DDD pertence ao Rio de Janeiro.\n\n");
		break;
		case 32: printf("\nEsse DDD pertence a Juiz de Fora.\n\n");
		break;
		case 19: printf("\nEsse DDD pertence a Campinas.\n\n");
		break;
		case 27: printf("\nEsse DDD pertence a Vit�ria.\n\n");
		break;
		case 31: printf("\nEsse DDD pertence a Belo Horizonte.\n\n");
		break;
		default: printf("\nEsse DDD pertence a uma cidade no Brasil sem identifica��o.\n\n");
	}
	system("pause");
	return 0;
}
