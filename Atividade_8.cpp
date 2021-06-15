/* Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o 
peso ideal da pessoa, utilizando as seguintes fórmulas
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7
Entradas: Nome, sexo e altura da pessoa
Saídas: “Ilmo. Sr.” + Nome e peso ideal*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100], sexo;
	float altura;
	
	do{
	    printf("Digite o nome da pessoa: \n");
	    fgets(nome, 100, stdin);
	    fflush(stdin);
	    if (strlen(nome)<=3) 
	       printf ("Nome inválido! Muito curto.\n\n");
      } while(strlen(nome)<=3);
    
    do{
    	printf("Digite o sexo da pessoa (F ou M): \n");
    	scanf("%c", &sexo);
    	fflush(stdin);
    	sexo = toupper (sexo);
    	if (sexo !='F' && sexo !='M')
    	   printf("Sexo inválido!\n\n");
      } while(sexo !='F' && sexo !='M');
    
	printf("Digite a altura da pessoa: \n");
	scanf("%f", &altura);
	
	system("cls");
    
    if(sexo=='F'){
    	altura=(62.1*altura)-44.7;
		printf("Ilma. Sra %sSeu peso ideal é: %.2f Kg\n\n", nome, altura);
    }else{
	    altura=(72.5*altura)-58;
		printf("Ilmo. Sr %sSeu peso ideal é: %.2f Kg\n\n", nome, altura);}
      
    system("pause");
    return 0;
}
