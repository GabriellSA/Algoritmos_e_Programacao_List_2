/*Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual 
o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo.
Entradas: valor 1, 2 e 3
Sa�das: Menor valor */
                                     //Anexando Bibliotecas:
#include<stdio.h>                   //Cont�m fun��es de entrada e sa�da,"printf", "scanf" etc                                        
#include<stdlib.h>                 //Cont�m fun��es de aloca��o de mem�ria, "cls" etc                               
#include<locale.h>                //Define as configura��es locais, linguagem, data, moeda etc                                                                        
                                               
int main(){                                 //In�cio do algoritmo: fun��o main             
    setlocale(LC_ALL, "Portuguese");       //Definindo linguagem (portugu�s) para uso de acentos e "�"
    
    float valor1, valor2, valor3;         //Declara��o de vari�veis
    
    printf("Digite o primeiro valor: \n");                //Impress�o de texto para o usu�rio
    scanf("%f", &valor1);                                //Vincula o valor digitado a uma vari�vel (valor1=3)
    printf("Digite o segundo valor: \n");               //Impress�o de texto para o usu�rio
    scanf("%f", &valor2);                              //Vincula o valor digitado a uma vari�vel (valor2=5)
    printf("Digite o terceiro valor: \n");            //Impress�o de texto para o usu�rio
    scanf("%f", &valor3);                            //Vincula o valor digitado a uma vari�vel (valor3=1)
    
    if(valor1<valor2 && valor1<valor3)                        //'if', estrutura de 'se', executar� se condi��o for satisfeita (3<5 e 3<1 ? = N�o)
       printf("O menor valor �: %.2f\n\n", valor1);          //Impress�o de texto para o usu�rio (N�o executa)
    else if(valor2<valor1 && valor2<valor3)                 //'if', estrutura de 'se', executar� se condi��o for satisfeita (5<3 e 5<1 ? = N�o)
       printf("O menor valor �: %.2f\n\n", valor2);        //Impress�o de texto para o usu�rio (N�o executa)
    else                                                  //'else', executa se todas as estruturas anteriores forem falsas
	   printf("O menor valor �: %.2f\n\n", valor3);      //Impress�o de texto para o usu�rio (Executa)
    
    system("pause");                                    //Pausa o sistema
    return 0;                                          //Retorno da Fun��o
}
