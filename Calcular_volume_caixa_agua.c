#include <stdio.h>

//Implemente um programa para calcular o volume de uma caixa dC!gua cilindrica//
main ()
{
  float raio, altura, base, total;
  printf ("\n\n\n\n\n\n\n");
  printf ("\nCalcule o raio e altura da caixa Dagua");
  printf ("\ninforme o raio:");
  scanf ("%f", &raio);
  printf ("selecione a altura:");
  scanf ("%f", &altura);
  base = (raio * raio) * altura;
  total = base * 3.1415;
  printf ("\n\t Altura sendo %.2f cm \n\t Raio: %.2fcm", altura, raio, base);
  printf ("\n\t O cilindro  de: %.2fcm", total);
  printf ("\n\t O seu reservatorio tem um total de: %.2flt", base);
}
