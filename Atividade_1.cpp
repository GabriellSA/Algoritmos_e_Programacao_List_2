/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao 
motorista somente se ele ser� multado, quando estiver trafegando no Eixo Rodovi�rio (limite 
de 80 km/h). 
Entradas: Velocidade e placa 
Sa�da: Multa */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");

	float velocidade;
	char placa[7];
	
	printf("Digite a velocidade do ve�culo em km/h: \n");
	scanf("%f", &velocidade);
	printf("Digite a placa do ve�culo: \n");
	scanf("%s", &placa);
	
	if(velocidade>80) printf("\nVe�culo placa '%s' ser� multado.\n\n", placa);
	else printf("\nVe�culo placa '%s' n�o ser� multado.\n\n", placa);
	
system ("pause");
return 0;
}
