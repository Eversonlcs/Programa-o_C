#include<stdio.h>

 main () 
{
  
 float r1, r2, r3, r4, r5,total, imposto;
  
 printf ("\n\n\n\n\n");
  
 printf ("\n\tPrograma para imposto de renda");
  
 printf ("\n\t Digite a primeira renda:");
  
 scanf ("%f", &r1);
  
 printf ("\t Digite a segunda renda:");
  
 scanf ("%f", &r2);
  
 printf ("\t Digite a terceira renda:");
  
 scanf ("%f", &r3);
  
 printf ("\t Digite a quarta renda:");
  
 scanf ("%f", &r4);
  
 printf ("\t Otimo, agora digite a ultima renda:");
  
 scanf ("%f", &r5);
  
 total= (r1+r2+r3+r4+r5)*12;
 imposto = (r1 + r2 + r3 + r4 + r5) * 0.12;
  
 
 printf ("\tO valor dos impostos C) de: %f", imposto);
  
 printf ("\n\t Obrigado por usar nosso programa!!!!");

}
