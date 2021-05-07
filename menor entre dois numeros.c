/*Autor: Nathalia Cristina Santos
Data de criação: 18/10/2020
Data de atualização: 18/10/2020
Objetivos: O menor entre dois numeros*/

#include <stdio.h>
#include <string.h>

int n1, n2;

int main ()
{
    printf("insira os dois valores\n");
    scanf("%d %d", &n1, &n2);

    if(n1 <= n2)
    {
      printf("%d menor entre os dois\n", n1);

    }
    if(n2 <= n1)
    {
      printf("%d menor entre os dois\n", n2);
    }

    
}