/*Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor 
absoluto) elaborando os cálculos matemáticos para isso.
Entradas: Número
Saídas: Módulo do Número*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL, "Portuguese");

	float numero, modulo;
	
	printf("Digite um número: \n");
	scanf("%f", &numero);
	
	modulo= fabs(numero);
	
	printf("\nO módulo do número é: %.2f\n\n", modulo);
	
system("pause");
return 0;
}
