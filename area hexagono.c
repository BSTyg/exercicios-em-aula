/******************************************************************************
Nathalia Cristina Santos
RA: 795698
Objetivo: Calcular a area e perimetro de um hexagono
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int lado, area, perimetro;

int main()
{
    printf("insira os lados do hexagono:\n");
    scanf("%d", &lado);
    
    perimetro = lado*6;
    area = (3*pow(lado,2)*sqrt(3))/2;
    
    printf("o perimetro do hexagono eh: %d", perimetro);
    printf("e sua area eh: %d", area);
    
    return 0;
}
