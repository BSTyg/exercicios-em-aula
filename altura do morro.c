/******************************************************************************
Autor: Nathalia Cristina Santos 
Data de criação: 01/10/2020
Data de Atualização: 21/11/2020
Objetivos: Calcula a altura de um morro de acordo com o angulo informado

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct area 
{
    float  *alfa, *beta, *DistPercorrida, *AlturaAlfa, *AlturaBeta, *Distancia, *Altura;
};
int main() {
    
    struct area dist;

  float *alfa = (float*) malloc(sizeof(float));
  float *beta = (float*) malloc(sizeof(float));
  float *AlturaAlfa = (float*) malloc(sizeof(float));
  float *AlturaBeta = (float*) malloc(sizeof(float));
  float *Distancia = (float*) malloc(sizeof(float));
  float *DistPercorrida = (float*) malloc(sizeof(float));
  float *Altura = (float*) malloc(sizeof(float));

  #define pi (3.141519)
//obtenção dos dados para o exercicio

    printf("Informe o angulo inicial");
    scanf("%f", dist.alfa);
    printf("E o angulo final");
    scanf("%f", dist.beta);
    printf("E qual a distancia percorrida?");
    scanf("%f", dist.DistPercorrida);

//calculo das tangentes

    dist.AlturaAlfa = tan(*alfa*M_PI/180);
    dist.AlturaBeta = tan(*beta*M_PI/180);

//calculo da distancia

    *dist.Distancia = (dist.AlturaAlfa * dist.DistPercorrida)/(*dist.AlturaBeta - *dist.AlturaAlfa);

//calculo da altura do morro (Altura)

    dist.Altura = alfa * DistPercorrida + (*Distancia);
    printf("E a altura do morro %f", *dist.Altura);

system("PAUSE");
return 0;
}

