//Programa de Everson Lucas//
//Implemente uma Enquete//
#include <stdio.h>
#include <math.h>
int main(){
char letra;
int total,q1,q2,q3,q4,q5;

printf("\n\t Enquete de 2023");
printf("\n Responda 5 perguntas");
printf("\n Digite a letra que acha que esta correta, lembrando A,B,C,D,E");
printf("\n Iniciamos as perguntas");
printf("\n Quem foi o melhor jogador do mundo desse ano?");
printf("\n (A)Messi (B)CR7 (C)Neymar (D)Ribamar (E)Biro Biro\n");
scanf("%c",&letra);
if(letra=='a'){
	q1=+1;
}
else{
	q1=+0;
}
printf("\n Jogador com mais bolas de ouro");
printf("\n(A)Messi (B)CR7 (C)Neymar (D)Ribamar (E)Biro Biro\n");
scanf(" %c",&letra);
if(letra=='a'){
	q2=+1;
}
else{
	q2=+0;
}

printf("\n Jogador com mais numeros de titulos");
printf("\n(A)Messi (B)CR7 (C)Neymar (D)Ribamar (E)Biro Biro\n");
scanf(" %c",&letra);
if(letra=='b'){
	q3=+1;
}
else{
	q3=+0;
}
printf("\n Jogador mais velho");
printf("\n(A)Messi (B)CR7 (C)Neymar (D)Ribamar (E)Biro Biro\n");
scanf(" %c",&letra);
if(letra=='e'){
	q4=+1;
}
else{
	q4=+0;
}
printf("\n Quem já jogou no vasco");
printf("\n(A)Messi (B)CR7 (C)Neymar (D)Ribamar (E)Biro Biro\n");
scanf(" %c",&letra);
if(letra=='d'){
	q5=+1;
}
else{
	q5=+0;
}
total=q1+q2+q3+q4+q5;

printf("O seu total de acertos foi: %d de 5 perguntas",total);
}
