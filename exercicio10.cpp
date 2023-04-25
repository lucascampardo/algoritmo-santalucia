#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

main(){
	char nome[20];
	int tamanho;
	printf("Entre com o seu primeiro nome:");
	scanf("%s",&nome);
	tamanho=strlen(nome);
	printf("Seu nome tem %d caracteres", tamanho);

}
