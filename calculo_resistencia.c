
#include <stdio.h>

int main()
{
   float escolha,r1,r2,res,par;
    printf("Programa para calcular a resistencia equivalente: Serie ou Paralelo");
    printf("digite se e 1 ou 2:");
	scanf("%f",&escolha);
	if(escolha <= 1)
	{	
	printf("\nInsira a sua primeira resistencia: ");
    scanf ("%f" ,&r1);
    printf ("\n Insira sua segunda resistencia:");
     scanf("%f",&r2);
     res=(r1+r2);
     printf("sua serie e:%.2f",res);
	 }
     else{
	 printf("\nInsira a sua primeira resistencia: ");
    scanf ("%f" ,&r1);
    printf ("\n Insira sua segunda resistencia:");
     scanf("%f",&r2);
     par=(r1*r2)/(r1+r2);
     printf("Seu paralelo e:%.2f",par);
 }
}

