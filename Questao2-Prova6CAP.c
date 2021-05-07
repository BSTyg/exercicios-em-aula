/*Nathalia Cristina Santos
Data de criação: 15/10/2020
Data de atualização: 16/10/2020
Objetivos: Questao 2 da prova do Ciclo 6 da prova de CAP: diferenciar se o numero eh ou nao primo*/

#include <stdio.h>

int N, i, ePrimo;

int main()
{
    //entrada de dados
    printf("insira um numero\n");
    scanf("%d", &N);

    //Determinação se o numero é primo 
    if ((N == 0)&& (N == 1))
    {
      ePrimo = 0;
    }
    else if (N == 2)
    {
      ePrimo = 1;
    }
    else 
    {
      ePrimo = 1;
      i = 2;
    }
    do 
    {
      if (N % i == 0)
      {
        ePrimo = 0;
      }
      i = i + 1;
    }while (i!=N);

    if (ePrimo == 1)
    {
    //saida de dados
     printf("eh primo %d", N);
    }
    else{
      printf("nao eh primo %d", N);
    } 
    
    system ("PAUSE");
    return  0;

}


