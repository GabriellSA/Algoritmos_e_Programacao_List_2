/*Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
Entradas: Valor 1 e Valor 2
Saídas: Diferença entre eles*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, resultado;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &valor2);
	
	if(valor1>valor2){
		resultado=valor1-valor2;
		printf("A diferença entre o primeiro e o segundo valor é: %d\n\n", resultado);
	} else {resultado=valor2-valor1;
	        printf("A diferença entre o segundo e o primeiro valor é: %d\n\n", resultado);}
	       
	system("pause");
	return 0;       
}
