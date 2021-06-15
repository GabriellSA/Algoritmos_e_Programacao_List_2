/*Fa�a e apresente o chinesinho do seu algoritmo do exerc�cio 12.*/
                             //Anexando Bibliotecas:
#include<stdio.h>           //Cont�m fun��es de entrada e sa�da,"printf", "scanf" etc
#include<stdlib.h>         //Cont�m fun��es de aloca��o de mem�ria, "cls" etc 
#include<locale.h>        //Define as configura��es locais, linguagem, data, moeda etc

int main(){                              //In�cio do algoritmo: fun��o main 
	setlocale(LC_ALL, "Portuguese");    //Definindo linguagem (portugu�s) para uso de acentos e "�"
	
	int DDD;                           //Declara��o de vari�veis
	
	printf("Digite o n�mero de DDD: \n");             //Impress�o de texto para o usu�rio
	scanf("%d", &DDD);                               //Vincula o valor digitado a uma vari�vel (DDD=11)
	
	switch(DDD){      //'switch' 'case', estrutura de menu, um teste l�gico de compara��o � executado para ent�o assim seguir com uma determinada linha estabelecida
		case 61: printf("\nEsse DDD pertence a Bras�lia.\n\n");                         //'case', 61=11 ? = N�o
		break;                                                                         //Para a fun��o 'Switch case' (N�o executa)
		case 71: printf("\nEsse DDD pertence a Salvador.\n\n");                       //'case', 71=11 ? = N�o
		break;                                                                       //Para a fun��o 'Switch case' (N�o executa)
		case 11: printf("\nEsse DDD pertence a S�o Paulo.\n\n");                    //'case', 11=11 ? = Sim
		break;                                                                     //Para a fun��o 'Switch case' (Executa)
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
		default: printf("\nEsse DDD pertence a uma cidade no Brasil sem identifica��o.\n\n");     //'Default', usado caso seja digitado um valor qualquer diferente dos listados
		break;
	}
	system("pause");       //Pausa o sistema
	return 0;             //Retorno da Fun��o
}
