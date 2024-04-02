///Everson lucas 29.03.2023///

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define PI 3.14
#define SENHA 1234

main(){
	float base,altura,triangulo,circulo,r,quadrado,l;
	char escolha;
	int dado;
	
	
	printf("Boa noite, para iniciar o codigo, digite sua senha:\n");
	scanf("%d", &dado);
	if (dado==SENHA)
	{	
		  printf("\nSeja bem vindo!!!");
		  system("pause");	
		  printf("Escolha uma das figuras sendo triangulo (T) ou circulo (C) ou quadrado(Q).\n");
	      printf("\nQual figura voce quer saber?");
	      scanf(" %c",&escolha);
	 
	 
	      if (escolha=='t'|| escolha=='T')
	      {
	  	      printf("Digite o valor da Base:");
		      scanf("%f", &base);
			  printf("Digite o valor da Altura:");
			  scanf("%f", &altura);
			  triangulo= (base*altura/2);
		      printf("\nO valor do seu triangulo e:%.1f", triangulo);
		  }	
	      else if(escolha=='c'|| escolha=='C'){
	
  			  printf("Digite o valor do seu raio:");
		      scanf("%f",&r);
		      circulo= (r*r)*PI;
		      printf("\n O valor do raio e: %f m²", circulo);
		  }
		  else if (escolha=='q'|| escolha=='Q') {
			  printf("Digite o valor da largura:");
		      scanf("%f",&l);
		      quadrado=(l*l);
			  printf("A medida de total 1 quadrado e %.2fcm.",quadrado);
		  }
	}
 	else
	{
		printf("Caracter inválido,tente novamente");
	}
}

