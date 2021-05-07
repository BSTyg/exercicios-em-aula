/******************************************************************************
Nathalia Cristina Santos
RA: 795698
Objetivo: calcular a função
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float n, x, resultado;

int main()
{
    printf("insira o valor n:\n");
    scanf("%f", &n);
    printf("insira o valor x\n");
    scanf("%f", &x);
    
    resultado = pow(x, n-1);
    printf("o resultado eh: %f", resultado);
    
    return 0;
}