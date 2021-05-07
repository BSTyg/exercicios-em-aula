/*Nathalia Cristina Santos
Data de criação: 15/10/2020
Data de atualização: 15/10/2020
Objetivos: Questao 1 da prova do Ciclo 6 da prova de CAP: calcular bhaskara*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //primeiro deve-se calcular o delta formula: b^2-4ac

    int  a, b, c, delta;
    float raiz, raiz1, raiz2;

    //repeticao que termina quando o nome for igual a "fim"
        while(strcmp(delta,"fim")!=0)
    {
        printf("Informe a, b, c, para os calculos. Por favor nao confunda a ordem nos numeros\n");
        scanf(" %d %d %d", &a, &b, &c);
        delta = pow(b, 2) - 4*a*c;
    }
    

    //agora vamos calcular o bhaskara formula: -b +- raiz de delta dividido por 2a

    if (delta < 0)
    {
        printf("nao possui raizes reais\n");
    }
    if (delta ==0)
       {
        printf("Há duas raizes identicas\n");
        raiz = (-b + sqrt(delta))/(2*a);
        printf("%f", raiz);
        printf("%d", delta);
       } 
    if (delta > 0)
    {
        printf("Ha duas raizes distintas\n");
        raiz1 = (-b + sqrt(delta)) / (2*a);
        raiz2 = (-b - sqrt(delta)) / (2*a);
        printf(" %.2f\n %.2f\n", raiz1, raiz2);
        printf("o delta eh %d", delta);
    }
        
        return 0;
    }