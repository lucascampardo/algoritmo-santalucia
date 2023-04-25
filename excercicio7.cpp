#include<stdio.h>
#include<stdlib.h>
//programa de зг
main(){
float peso,excesso,multa; //variaveis
printf ("calculando o peso escedente \n");
printf ("entre com o peso do peixe");
scanf ("%f",&peso);
if (peso>50)
{
excesso=peso-50;  //excesso e igual (calculo de peso -50 que e o maximo)
multa=4*excesso; // multa equivalente ao excesso vezes 4 reais
}
else
{
	excesso=0;
	multa=0;
	printf ("nada de excesso \n");
}
printf ("excesso:%3.2f",excesso);
printf ("multa: %3.2f,multa");
}
