/*Autor: Nathalia Cristina Santos
Data: 24/10/2020
Objetivo: Desafio 1 - calculo de uma equacao de segundo grau*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

// declaracao de variavel
 float a,b,c;
 float delta, x1,x2;

 printf("informe os numeros para a equacao\n");
// obtencao dos dados
 scanf("%f %f %f",&a,&b,&C); // 
// calculo do discriminante
 delta = pow(b,2) - 4.*a*c;
// condicoes 
 if (delta >= 0) {
 // calculo das raizes
 x1 = (-b + sqrt(delta))/(2.*a);
 x2 = (-b - sqrt(delta))/(2.*a);
 printf("As raizes reais sao:  %.2f e %.2f\n", x1, x2);
 }
 else {
 printf("Nao existem raizes reais");
 }
}
