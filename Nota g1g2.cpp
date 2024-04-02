//////// PROGRAMA PARA DAR A NF PARA O ALUNO///////////////////
///Everson lucas 29.03.2023///

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define PI 3.14
#define SENHA 1234

main(){

int pessimo,ruim,aprovado,otimo,g1,g2,nota;

printf("Programa para saber se o aluno passou na materia \n");
printf("Digite sua o valor da sua G1:");
scanf("%d",&g1);
printf("Digite sua o valor da sua G2:");
scanf("%d",&g2);

nota=(g1+g2)/2;
if(nota==0 || nota < 3)
	{
	printf("%d Reprovado: pessimo", nota);
	}
else if (nota ==3 || nota < 6)
	{
	printf("%d Reprovado: ruim", nota);
	}
		else if (nota ==6 || nota != 9)
		{
			printf("%d Aprovado: satisfatorio", nota);
		}
		else if (nota ==9 || nota ==10)
		{
		printf("%d Aprovado: otimo", nota);
		}	
	else
	{
		printf("Erro no seu codigo");
	}
}
