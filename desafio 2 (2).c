/*Nathalia Cristina Santos
RA: 795698
Desafio 2*/

#include <stdio.h>      
#include <math.h>     

#define PI 3.14159265

int main ()
{ 
  float fatorial, numero, seno, rad, sinal, result ;
  
  //seno pela funcao predefinida do math.h
  seno = sin(numero*PI/180);
  printf ("o seno de  %f eh %f.\n", numero, seno );


  //calculando o seno
printf("Insira um valor: \n");
scanf("%f", &numero);

	//convertendo graus para radianos 
	rad = (numero*PI)/180;
	result = rad;
	sinal = 1;


//ajuste para que o rad fique no intervalo de [0, 2pi]
	while(result>=360)
	{
		rad = result - 360;
	}


//calculando o fatorial
for(fatorial = 1; numero > 1; numero = numero - 1)
fatorial = fatorial * numero;
printf("\nFatorial: %.4f\n", fatorial);

//seno
seno = fatorial * rad;
printf("o seno eh %.4f", seno);


  return 0;
}