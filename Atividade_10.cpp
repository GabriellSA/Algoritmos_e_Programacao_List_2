/*Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual 
o menor deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo.
Entradas: valor 1, 2 e 3
Saídas: Menor valor */
                                     //Anexando Bibliotecas:
#include<stdio.h>                   //Contém funções de entrada e saída,"printf", "scanf" etc                                        
#include<stdlib.h>                 //Contém funções de alocação de memória, "cls" etc                               
#include<locale.h>                //Define as configurações locais, linguagem, data, moeda etc                                                                        
                                               
int main(){                                 //Início do algoritmo: função main             
    setlocale(LC_ALL, "Portuguese");       //Definindo linguagem (português) para uso de acentos e "ç"
    
    float valor1, valor2, valor3;         //Declaração de variáveis
    
    printf("Digite o primeiro valor: \n");                //Impressão de texto para o usuário
    scanf("%f", &valor1);                                //Vincula o valor digitado a uma variável (valor1=3)
    printf("Digite o segundo valor: \n");               //Impressão de texto para o usuário
    scanf("%f", &valor2);                              //Vincula o valor digitado a uma variável (valor2=5)
    printf("Digite o terceiro valor: \n");            //Impressão de texto para o usuário
    scanf("%f", &valor3);                            //Vincula o valor digitado a uma variável (valor3=1)
    
    if(valor1<valor2 && valor1<valor3)                        //'if', estrutura de 'se', executará se condição for satisfeita (3<5 e 3<1 ? = Não)
       printf("O menor valor é: %.2f\n\n", valor1);          //Impressão de texto para o usuário (Não executa)
    else if(valor2<valor1 && valor2<valor3)                 //'if', estrutura de 'se', executará se condição for satisfeita (5<3 e 5<1 ? = Não)
       printf("O menor valor é: %.2f\n\n", valor2);        //Impressão de texto para o usuário (Não executa)
    else                                                  //'else', executa se todas as estruturas anteriores forem falsas
	   printf("O menor valor é: %.2f\n\n", valor3);      //Impressão de texto para o usuário (Executa)
    
    system("pause");                                    //Pausa o sistema
    return 0;                                          //Retorno da Função
}
