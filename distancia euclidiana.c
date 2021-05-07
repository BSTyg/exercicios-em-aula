/*Autor: Nathalia Cristina Santos
Data de criação: 18/10/2020
Data de atualização: 18/10/2020
Objetivos: Calcular  a distancia euclidiana*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float pontox1, pontox2, pontoy1, pontoy2, DE;

int main ()
{
    printf("insira as distancias x\n");
    scanf("%f %f", &pontox1, &pontoy1);
    printf("insira as distancias y\n");
    scanf("%f %f", &pontox2, &pontoy2);

    DE = sqrt(pow(pontox2-pontox1, 2) + pow(pontoy2-pontoy1, 2));
    printf("a distancia euclidiana eh: %f ", DE);
    
}