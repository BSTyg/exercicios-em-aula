/******************************************************************************
Nathalia Cristina Santos
Estruturas de Repeticao - Do While 
*******************************************************************************/
#include <stdio.h>
int main(void)
{
  int contador = 1; //declarando e inicializando a variável de controle . se nao colocar nada assume-se que começa do 0
  
  while (contador <= 18) // Testando a condição
  {
    printf("%d ", contador); //Executando um comando dentro do laço
    
    contador++; //atualizando a variável de controle
  }  
  
  return 0;
}