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

bool retBool(){
  return true;
}


int main(){

borda();

bool varBool;

varBool = retBool;

if(varBool){
  printf("Falsoh");
}else{
  printf("Verdadeiroh");
}
  

borda();
  return 0;
}