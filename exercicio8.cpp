#include<stdio.h>
#include<stdlib.h>
//programa de calculo de salario
main(){
float excesso,horas,salario,extra,nome_funcionario;
printf ("calculando o peso escedente \n");
printf ("leia o nome do funcionario");
scanf ("%c",&nome_funcionario);
printf ("leia a quantidade de horas trabalhadas");
scanf ("%f",&horas);
printf ("leia o salario do funcionario");
scanf ("%f",&salario);

if (horas>50)
{
	excesso=horas-50;
	salario=excesso*20;
	printf("salario de %f",salario);
}
{
		
else (horas<50)
     salario=horas*10;
     printf("salario de %f",salario);

}
}
