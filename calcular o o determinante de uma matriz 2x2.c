#include <stdio.h>

//Implemente um programa para calcular o o determinante de uma matriz 2x2//
main ()
{
  float a,b,c,d,dp,ds,total;
  printf ("\n\n\n\n\n\n\n");
  printf ("\n Insira o valor de A:");
  scanf ("\n %f:", &a);
  printf ("Insira o valor de B:");
  scanf ("%f", &b);
  printf ("\n Insira o valor de C:");
  scanf ("\n %f:", &c);
  printf ("Insira o valor de D:");
  scanf ("%f", &d);
  dp=(a*d);
  ds=(b*-c);
  printf ("\n\t Sua matriz dp é\n A:%f B:%f\n C:%f D:%f", a,b,c,d);
  total= dp+ds;
 printf("\nTotal de DP + DS é  %.2f",total);
  
}