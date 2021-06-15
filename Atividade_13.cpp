/*Faça e apresente o chinesinho do seu algoritmo do exercício 12.*/
                             //Anexando Bibliotecas:
#include<stdio.h>           //Contém funções de entrada e saída,"printf", "scanf" etc
#include<stdlib.h>         //Contém funções de alocação de memória, "cls" etc 
#include<locale.h>        //Define as configurações locais, linguagem, data, moeda etc

int main(){                              //Início do algoritmo: função main 
	setlocale(LC_ALL, "Portuguese");    //Definindo linguagem (português) para uso de acentos e "ç"
	
	int DDD;                           //Declaração de variáveis
	
	printf("Digite o número de DDD: \n");             //Impressão de texto para o usuário
	scanf("%d", &DDD);                               //Vincula o valor digitado a uma variável (DDD=11)
	
	switch(DDD){      //'switch' 'case', estrutura de menu, um teste lógico de comparação é executado para então assim seguir com uma determinada linha estabelecida
		case 61: printf("\nEsse DDD pertence a Brasília.\n\n");                         //'case', 61=11 ? = Não
		break;                                                                         //Para a função 'Switch case' (Não executa)
		case 71: printf("\nEsse DDD pertence a Salvador.\n\n");                       //'case', 71=11 ? = Não
		break;                                                                       //Para a função 'Switch case' (Não executa)
		case 11: printf("\nEsse DDD pertence a São Paulo.\n\n");                    //'case', 11=11 ? = Sim
		break;                                                                     //Para a função 'Switch case' (Executa)
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
		default: printf("\nEsse DDD pertence a uma cidade no Brasil sem identificação.\n\n");     //'Default', usado caso seja digitado um valor qualquer diferente dos listados
		break;
	}
	system("pause");       //Pausa o sistema
	return 0;             //Retorno da Função
}
