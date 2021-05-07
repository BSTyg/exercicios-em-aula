/******************************************************************************
Nathalia Cristina Santos 
RA: 785698
Objetivo: Desafio 2, resto de uma divisao
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

// declaracao de variavel
 int a, b, divisao, resto;

 printf("informe os numeros\n");
// obtencao dos dados
 scanf("%d%d ",&a, &b); // 
// calculo do discriminante
 divisao  = a/b;
 resto = (a % b);

 printf("a divisao eh %d/%d\n", a, b);
 printf("o resto eh %d", resto);
 }

