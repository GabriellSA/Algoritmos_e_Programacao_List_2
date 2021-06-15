/*Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � 
Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� 
pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20 
horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.
Entradas: Horas utilizada
Sa�das: Valor a ser pago*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float horas, diferenca=0;
	
	printf("Digite a quantidade de horas utilizada: \n");
	scanf("%f", &horas);
	
	if(horas<20)
	  printf("\nO valor a ser pago � de: R$ 30,00\n\n");
	else{
	  diferenca=horas-20;
	  horas=((30*0.1)*diferenca)+30;
	  printf("\nO valor a ser pago � de: R$ %.2f\n\n", horas);}
	  
	system("Pause");
	return 0;
}
