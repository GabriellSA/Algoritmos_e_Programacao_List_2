/*Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor 
absoluto) elaborando os c�lculos matem�ticos para isso.
Entradas: N�mero
Sa�das: M�dulo do N�mero*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL, "Portuguese");

	float numero, modulo;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &numero);
	
	modulo= fabs(numero);
	
	printf("\nO m�dulo do n�mero �: %.2f\n\n", modulo);
	
system("pause");
return 0;
}
