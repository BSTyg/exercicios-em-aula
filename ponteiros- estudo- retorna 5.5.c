/******************************************************************************
Nathalia Cristina Santos.

Estudo sobre funções

*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>

void borda(){
  printf("\n|||||||||||||||||||||||||||||||||\n");
}

float porcentagem(){
  return 5.5;
}

int main(){

float numero, num;

  borda();

  printf("\nInsira um número\n");
  scanf("%f\n", &numero);
  printf("%2.f\n", numero);

  numero = numero * porcentagem();

printf("%5.2f\n", numero);

borda();

return 0;
}