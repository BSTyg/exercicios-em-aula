/******************************************************************************
Nathalia Cristina santos

Estruturas de repeticao - For 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;//variável de controle do loop
  
  // contador em ordem crescente 
  for (i = 0; i <= 10; i++)
  {
    printf("%d\n", i);
  }

  printf("\n");

  //contador em ordem descrescente 
  for(i = 10; i >= 0; i--){
    printf("%d\n", i);
  }
  
  printf("\n");
  
  //mostra frase em sequencia 
  for (i = 1; i <= 3; i++)
  {
    printf("Nathalia Cristina santos\n");
  }
  
  return(0);
}