#include <stdio.h>
#include <stdlib.h>
// Programa para ler 4 numeros
// Calcular o quadrado de cada um , somar todos e mostrar o resultado

main(){
	int n1,n2,n3,n4,q1,q2,q3,q4; //int numeros inteiros
	float soma; //float casas decimais
	printf("entre com o primeiro numero:\n");
	scanf("%i",&n1); // lendo uma variavel do tipo inteiro
	printf("Entre com o segundo numero:\n");
	scanf("%i", &n2); //lendo uma variavel do tipo inteiro
	printf("Entre com o terceiro numero:\n");
	scanf("%i", &n3); // lendo uma variavel do tipo inteiro
	printf("Entre com o quarto numero:\n");
	scanf("%i", &n4); // lendo uma variavel do tipo inteiro
	q1=n1*n1;
	q2=n2*n2;
	q3=n3*n3;
	q4=n4*n4;
	soma=q1+q2+q3+q4;
	printf("O resultado da soma: %f",soma);
}


