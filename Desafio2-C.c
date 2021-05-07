/* Autor: Nathalia Cristina Santos 
RA: 795698
Data de Criação: 18/03/2021
Data de Atualização: 18/03/2021
Objetivos: Calcular a distancia percorrida de um avião*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declaração das variaveis 

float distancia, angulo, altura;
  
    int main () {

    printf("Qual o angulo?\n");
    scanf("%f", &angulo);
    printf("Qual a distancia percorrida?\n");
    scanf("%f", &distancia);

    //calculos

    angulo = sin(angulo*M_PI/180);
    altura = (angulo*distancia);

    //apuração dos resultados

    printf("A altura do aviao ate o chao e de = %.2f\n", altura);

    return 0;
}