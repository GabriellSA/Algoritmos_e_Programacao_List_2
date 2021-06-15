/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao 
motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite 
de 80 km/h). 
Entradas: Velocidade e placa 
Saída: Multa */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");

	float velocidade;
	char placa[7];
	
	printf("Digite a velocidade do veículo em km/h: \n");
	scanf("%f", &velocidade);
	printf("Digite a placa do veículo: \n");
	scanf("%s", &placa);
	
	if(velocidade>80) printf("\nVeículo placa '%s' será multado.\n\n", placa);
	else printf("\nVeículo placa '%s' não será multado.\n\n", placa);
	
system ("pause");
return 0;
}
