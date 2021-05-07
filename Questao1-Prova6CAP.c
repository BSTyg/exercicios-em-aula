/*Nathalia Cristina Santos
Data de criação: 15/10/2020
Data de atualização: 16/10/2020
Objetivos: Questao 1 da prova do Ciclo 6 da prova de CAP: calcular bhaskara mais de uma vez*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //para o uso do pow
#include <string.h>

#include<stdio.h>
int main(void)
{
  //declaracao das variaveis a serem utilizadas no exercicio
  int  a, b, c, delta;
  float raiz, raiz1, raiz2, bhaskara;
  char resp;

  do
  {
      //primeiro deve-se calcular o delta formula: b^2-4ac
    printf("Informe a, b, c, para os calculos. Por favor nao confunda a ordem nos numeros\n");
        scanf(" %d %d %d", &a, &b, &c);
        bhaskara = pow(b, 2) - 4*a*c;
        delta = bhaskara;
    //condicoes para os tipos de delta na operacao
      if (delta < 0.0){
        printf("nao possui raizes reais\n");
      }
      if (delta == 0.0){
        printf("Há duas raizes identicas\n");
        raiz = (-b + sqrt(delta))/(2*a);
        printf("%f", raiz);
        printf("%d", delta);
      } 
      if (bhaskara > 0.0){
        printf("Ha duas raizes distintas\n");
        raiz1 = (-b + sqrt(delta)) / (2*a);
        raiz2 = (-b - sqrt(delta)) / (2*a);
        printf(" %.2f\n %.2f\n", raiz1, raiz2);
        printf("o delta eh %.2d\n", delta);
      }
    //1 para continuar e 2 para finalizar
    printf("Digite c para continuar ou f para sair\n");
    scanf("%*c%c", &resp);
  
  }while (resp=='c');
  if(resp=='f')
  {
    printf("Ok, venha fazer mais contas mais tarde!\n\n");
  }
  

  return 0;
}





