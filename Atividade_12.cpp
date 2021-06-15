/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual 
cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação
Entradas: Número DDD
Saídas: Cidade*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int DDD;
	
	printf("Digite o número de DDD: \n");
	scanf("%d", &DDD);
	
	switch(DDD){
		case 61: printf("\nEsse DDD pertence a Brasília.\n\n");
		break;
		case 71: printf("\nEsse DDD pertence a Salvador.\n\n");
		break;
		case 11: printf("\nEsse DDD pertence a São Paulo.\n\n");
		break;
		case 21: printf("\nEsse DDD pertence ao Rio de Janeiro.\n\n");
		break;
		case 32: printf("\nEsse DDD pertence a Juiz de Fora.\n\n");
		break;
		case 19: printf("\nEsse DDD pertence a Campinas.\n\n");
		break;
		case 27: printf("\nEsse DDD pertence a Vitória.\n\n");
		break;
		case 31: printf("\nEsse DDD pertence a Belo Horizonte.\n\n");
		break;
		default: printf("\nEsse DDD pertence a uma cidade no Brasil sem identificação.\n\n");
	}
	system("pause");
	return 0;
}
