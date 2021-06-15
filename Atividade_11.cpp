/*Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de 
tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um 
outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
(chinesinho) ao lado.*/
                                  //Anexando Bibliotecas:
#include<stdio.h>                //Cont�m fun��es de entrada e sa�da,"printf", "scanf" etc
#include<stdlib.h>              //Cont�m fun��es de aloca��o de mem�ria, "cls" etc 
#include<locale.h>             //Define as configura��es locais, linguagem, data, moeda etc 

int main(){                                    //In�cio do algoritmo: fun��o main      
	setlocale(LC_ALL, "Portuguese");          //Definindo linguagem (portugu�s) para uso de acentos e "�"
	
	float valor1, valor2, valor3;            //Declara��o de vari�veis
	
	printf("Digite o primeiro valor: \n");            //Impress�o de texto para o usu�rio
	scanf("%f", &valor1);                            //Vincula o valor digitado a uma vari�vel (valor1=10)
	printf("Digite o segundo valor: \n");           //Impress�o de texto para o usu�rio
	scanf("%f", &valor2);                          //Vincula o valor digitado a uma vari�vel (valor2=12)
	printf("Digite o terceiro valor: \n");        //Impress�o de texto para o usu�rio
	scanf("%f", &valor3);                        //Vincula o valor digitado a uma vari�vel (valor3=15)
	
	if(valor1<valor2+valor3 && valor2<valor1+valor3 && valor3<valor2+valor1){           //'if', estrutura de 'se', executar� se condi��o for satisfeita (10<12+15 e 12<10+15 e 15<12+10 = Sim)
	   if(valor1==valor2 && valor1==valor3)	                                           //'if', estrutura de 'se', executar� se condi��o for satisfeita (10==12 e 10==15 = N�o)
	      printf("\nEssa figura � um tri�ngulo equil�tero.\n\n");                     //Impress�o de texto para o usu�rio (N�o executa)
	   else if(valor1==valor2 || valor1==valor3 || valor3==valor2)                   //'if', estrutura de 'se', executar� se condi��o for satisfeita (10=12 ou 10=15 ou 15=12 =N�o) 
	      printf("\nEssa figura � um tri�ngulo is�sceles.\n\n");                    //Impress�o de texto para o usu�rio (N�o executa)
	   else printf("\nEssa figura � um tri�ngulo escaleno.\n\n");	               //'else', executa se todas as estruturas anteriores forem falsas (Executa)
	}else                                                                         //'else', executa se todas as estruturas anteriores forem falsas (N�o executa)
	   printf("\nEssa figura n�o � um tri�ngulo.\n\n");                          //Impress�o de texto para o usu�rio (N�o executa)
	
	system("pause");                 //Pausa o sistema                                      
	return 0;                       //Retorno da Fun��o
}
