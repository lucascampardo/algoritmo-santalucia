#include<stdio.h>
#include<stdlib.h>
//programa maximo e minimo
main()
{
float imc,peso,altura;
printf (" entre com o peso \n");
scanf ("%f",&peso);
printf (" entre com a altura \n");
scanf ("%f",&altura);
imc=peso/altura/altura;
printf ("seu indice eh: %3.2f \n",imc);
if (imc<18) printf("abaixo do peso");
else
printf("peso bom");
}
