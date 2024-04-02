/*Código para calculo de media de 2 números*/


#include <stdio.h>

int
main ()
{
  float num1, num2, media;
  printf ("\tPROGRAMA PARA CALCULAR A MEDIA DE 2 NUMEROS");
  printf ("\n\nDigite um numero qualquer:");
  scanf ("%f", &num1);
  printf ("Digite outro numero qualquer:");
  scanf ("%f", &num2);

  media = (num1 + num2) / 2;
  printf ("a media C) %f:", media);
  printf ("\n Obrigado por utilizar nossos produtos...");
}
