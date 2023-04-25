#include<stdio.h>
#include<stdlib.h>
//programa de verificação se o numero e positivo ou negativo
main(){

int n;
printf ("entre com um numero \n");
scanf ("%i",&n);
if (n==0)printf("você digitou numero 0");
if (n>0)printf ("numero positivo");
if (n<0)printf ("numero negativo");
}
