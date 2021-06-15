/*Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como sa�da 
uma das seguintes mensagens: �Ilmo. Sr.�, para o sexo masculino ou �Ilma. Sra.� para o sexo 
feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
Ilma Sra. Ana Rita
Entradas: Nome e sexo
Sa�das: �Ilmo. Sr.� + Nome */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100], sexo;
	
	do{
	    printf("Digite o nome da pessoa: \n");
	    fgets(nome, 100, stdin);
	    fflush(stdin);
	    if (strlen(nome)<=3) 
	       printf ("Nome inv�lido! Muito curto.\n\n");
      } while(strlen(nome)<=3);
    
    do{
    	printf("Digite o sexo da pessoa (F ou M): \n");
    	scanf("%c", &sexo);
    	fflush(stdin);
    	sexo = toupper (sexo);
    	if (sexo !='F' && sexo !='M')
    	   printf("Sexo inv�lido!\n\n");
      } while(sexo !='F' && sexo !='M');
      system("cls");
      
      if(sexo=='F') printf("Ilma. Sra %s\n", nome);
      else printf("Ilmo. Sr %s\n", nome);
      
      system("pause");
      return 0;
}
