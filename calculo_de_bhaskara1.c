//Programa de Everson Lucas\\
//sqrt Calcula a Raiz da Variável que você determinar ex: Raiz de (49)=7\\
//pow Calcula a potência de um determinado número ex: 5², deve incluir ""pow(5,2);"//
// PROGRAMA PARA CALCULAR Bhaskaraz//
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,p,n,r1,r2,d;
    printf("Programa para calcular Bhaskara \n");
    printf("Digite o valor de a:");
    scanf("%f",&a);
    printf("Digite o valor de b:");
    scanf("%f",&b);
    printf("Digite o valor de c:");
    scanf("%f",&c);
    
    if(b*b-4*a*c>0)
    {
    d=sqrt(b*b-4*a*c);
    r1=(-b+d)/2*a;
    r2=(-b-d)/2*a;
    printf("Valor de x1 e:%.f e o valor de x2 e:%.f",r1,r2);
}
else {
printf("Seu delta e negativo, portanto nao calcula as raizes");
}
}

