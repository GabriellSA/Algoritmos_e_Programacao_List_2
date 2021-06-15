/*Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à 
Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você 
pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 
horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.
Entradas: Horas utilizada
Saídas: Valor a ser pago*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float horas, diferenca=0;
	
	printf("Digite a quantidade de horas utilizada: \n");
	scanf("%f", &horas);
	
	if(horas<20)
	  printf("\nO valor a ser pago é de: R$ 30,00\n\n");
	else{
	  diferenca=horas-20;
	  horas=((30*0.1)*diferenca)+30;
	  printf("\nO valor a ser pago é de: R$ %.2f\n\n", horas);}
	  
	system("Pause");
	return 0;
}
