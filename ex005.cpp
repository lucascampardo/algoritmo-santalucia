#include <stdio.h>
#include <stdlib.h>
// Programa cotacao dolar ex 5
// Calcular o real0

main(){
	float cotacao,dolares,reais;
	
	printf("Entre com o valor em dolares:\n");
	scanf("%f",&dolares);
	printf("Entre com a cotacao atual:\n");
	scanf("%f",&cotacao);
	reais=cotacao*dolares;
	printf("Valor convertido em reais:%3.2f",reais);
	
}


