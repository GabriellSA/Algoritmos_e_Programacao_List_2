/*Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de 
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um 
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
(chinesinho) ao lado.*/
                                  //Anexando Bibliotecas:
#include<stdio.h>                //Contém funções de entrada e saída,"printf", "scanf" etc
#include<stdlib.h>              //Contém funções de alocação de memória, "cls" etc 
#include<locale.h>             //Define as configurações locais, linguagem, data, moeda etc 

int main(){                                    //Início do algoritmo: função main      
	setlocale(LC_ALL, "Portuguese");          //Definindo linguagem (português) para uso de acentos e "ç"
	
	float valor1, valor2, valor3;            //Declaração de variáveis
	
	printf("Digite o primeiro valor: \n");            //Impressão de texto para o usuário
	scanf("%f", &valor1);                            //Vincula o valor digitado a uma variável (valor1=10)
	printf("Digite o segundo valor: \n");           //Impressão de texto para o usuário
	scanf("%f", &valor2);                          //Vincula o valor digitado a uma variável (valor2=12)
	printf("Digite o terceiro valor: \n");        //Impressão de texto para o usuário
	scanf("%f", &valor3);                        //Vincula o valor digitado a uma variável (valor3=15)
	
	if(valor1<valor2+valor3 && valor2<valor1+valor3 && valor3<valor2+valor1){           //'if', estrutura de 'se', executará se condição for satisfeita (10<12+15 e 12<10+15 e 15<12+10 = Sim)
	   if(valor1==valor2 && valor1==valor3)	                                           //'if', estrutura de 'se', executará se condição for satisfeita (10==12 e 10==15 = Não)
	      printf("\nEssa figura é um triângulo equilátero.\n\n");                     //Impressão de texto para o usuário (Não executa)
	   else if(valor1==valor2 || valor1==valor3 || valor3==valor2)                   //'if', estrutura de 'se', executará se condição for satisfeita (10=12 ou 10=15 ou 15=12 =Não) 
	      printf("\nEssa figura é um triângulo isósceles.\n\n");                    //Impressão de texto para o usuário (Não executa)
	   else printf("\nEssa figura é um triângulo escaleno.\n\n");	               //'else', executa se todas as estruturas anteriores forem falsas (Executa)
	}else                                                                         //'else', executa se todas as estruturas anteriores forem falsas (Não executa)
	   printf("\nEssa figura não é um triângulo.\n\n");                          //Impressão de texto para o usuário (Não executa)
	
	system("pause");                 //Pausa o sistema                                      
	return 0;                       //Retorno da Função
}
