/*Nathalia Cristina Santos
RA: 795698
Desafio 2*/

#include <stdio.h>      
#include <math.h>     

#define PI 3.14159265

//calcula o seno
float seno(float numero, float seno){
seno = sin(numero*PI/180);

}
//calcula o fatorial
float fat( float numero, float fatorial){
  
for(fatorial = 1; numero > 1; numero = numero - 1)
fatorial = fatorial * numero;

}

//seno arredondado
float sen1( float sen, float numero, float rad){

float resultado, sinal;

	while(resultado>=360)
	{
		rad = resultado - 360;
	}


rad = (numero*PI)/180;
	resultado = rad;
	sinal = 1;
}


int main ()
{ 
  float numero ;
  
  //obtencao de dados 
printf("Insira um valor: \n");
scanf("%f", &numero);

//apresentando resultados   
  printf ("o seno de  %f eh %f.\n", numero, seno );
  printf("\nFatorial: %.4f\n", fat);
 printf("o seno eh %.4f", sen1);

   return 0;
}