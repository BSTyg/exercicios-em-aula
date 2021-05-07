/******************************************************************************
Nathalia Cristina Santos.

Estudo sobre funções

*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void borda(){
  printf("\n|||||||||||||||||||||||||||||||||\n");
}

void retornaLetra(){

  printf("Nathalia Cristina");

}

char TabelaAsc(){
  return 78;
}

int main(){

char letra; 
int i;

borda();

letra = 97;

i = TabelaAsc();

  printf(" \n  %c  \n  %c \n", i, letra);

//  retornaLetra();
  
borda();
  return 0;
}