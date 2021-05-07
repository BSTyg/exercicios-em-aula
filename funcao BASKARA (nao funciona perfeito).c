/******************************************************************************
Nathalia Cristina Santos.

Estudo sobre funções
Funcao bhaskara

*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void borda(){
  printf("\n|||||||||||||||||||||||||||||||||\n");
}

float segGrau(float A, float B, float C)
{
    float delta;
    delta = B * B - 4 * A * C; // 0.4 e 0.6 corresponde aos pesos das notas dividido pela soma dos pesos.
    return delta;
}

double baskaraDuplo(float delta, float A, float B, float C){
  float bhaskara1, bhaskara2;
if (delta > 0){
      bhaskara1 =(-B + sqrt(-delta) )/2*A;
      bhaskara2 =(-B + sqrt(-delta) )/2*A;
      printf("\nx1: %f\n", bhaskara1);
      printf("\nx2: %f\n", bhaskara2);
    }

  return bhaskara1, bhaskara2;
}

float baskaraSimples(float delta, float A, float B, float C)
{
    float bhaskara;
    if (delta == 0){
      bhaskara =(-B + sqrt(-delta) )/2*A;
    }
    else {
      if (delta < 0) {
        printf("Nao existe!! :(");
      }
    }
    if (delta > 0){
    bhaskara = baskaraDuplo(A, B, C, delta);
    }
  return bhaskara;
}

//funcao main
int main() {
  
  float A, B, C, delta;
  float bhaskara1, bhaskara2, bhaskara;

  //obtendo dados 
  printf("\n\nDigite o primeiro numero:");
  scanf("%f", &A);
  printf("\nDigite o segundo numero:");
  scanf("%f", &B);
  printf("\nDigite o terceiro numero:");
  scanf("%f", &C);

  //chamando funcao delta

    delta = segGrau(A, B, C);
    bhaskara1 = baskaraSimples(bhaskara, A, B, C);
    bhaskara2 = baskaraDuplo(bhaskara2, A, B, C);

    //mostrando resultados
    printf("\n\ndelta = %2.f\n", delta);
    printf("\n\n baskara simpels = %2.f\n", bhaskara1);
}
