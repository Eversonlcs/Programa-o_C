
#include <stdio.h>

int main()
{
   int ano,idade;
    printf("\nPrograma para verificar se o usuario e maior ou menor de idade \n");
    printf("\ndigite o ano de nascimento:");
	scanf("%d",&ano);
	idade=(ano-2023);
	if (ano <=18){
	
	printf("\n voce e menor de idade");
    
	 }
     else{
	 
	 printf("\n voce e maior de idade");
 }
}

