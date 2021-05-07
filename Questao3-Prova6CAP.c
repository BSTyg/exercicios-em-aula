/*Nathalia Cristina Santos
Data de criação: 15/10/2020
Data de atualização: 16/10/2020
Objetivos: Questao 3 da prova do Ciclo 6 da prova de CAP: calcular bhaskara mais de uma vez*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi (3.14159)

int main() 
{	
  int sinal, i, x, fat;
	float grau, par, result ,rad;
	
	//o grau tem que ser convertido em radianos antes de o calculo ser feito
	printf("Informe o grau para o calculo do seno");
	scanf("%f",&grau);
	
	printf("O seno de acordo com a série de taylor.\n\n");
	rad = grau;
	
  //ajuste para que o rad fique no intervalo de [0, 2pi]
	while(rad>=360)
	{
		rad = rad - 360;
	}
	//convertendo graus para radianos 
	rad = (rad*pi)/180;
	result = rad;
	sinal = 1;

	for (i=3;i<=21;i= i + 2)
	{
		fat = 1;
		
		for(x=1;x<=i;x++){
			fat = fat * x;
		}
		
		par = pow(rad,i)/fat;
		
		if(sinal%2!=0){
			result = result + (par*-1);
		}
		else{
			result = result + par;
		}
		
		printf("O seno de %f com %d parcela é : %f\n", grau, sinal, result);
		sinal = sinal + 1;
	}
	
	printf("\n\n seno de %f calculado pela função padrao de c eh: %f\n", grau, sin(rad));
	
	system("PAUSE");
	return 0;
}