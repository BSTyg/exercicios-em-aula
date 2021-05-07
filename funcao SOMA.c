/******************************************************************************
Nathalia Cristina Santos.

Estudo sobre funções
Funcao SOMA

*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void borda(){
  printf("\n|||||||||||||||||||||||||||||||||\n");
}

void SOMA(int a, int b)  // basta separar os parâmetros por vírgulas
{
   int result;     // a declaração de variáveis é igual ao que
                     // se faz na função main
   result = a+b;
   borda();
   printf("\nA soma de %d com %d é %d\n", a,b,
   result);
  
}

int main()
{
    int a;
    int b;

    borda();
    printf("Insira aqui um valor para somar\n");
    scanf("%d", &a);
    printf("Insira outro valor para somar\n");
    scanf("%d", &b);
    SOMA(b,a);  
    borda();
    return 0;
}