/******************************************************************************
Nathalia Cristina Santos
RA: 795698
Desafio 1 CAP
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float raiz_quadrada(float numero), raiz;

int main( int argc, char **argv)
{  
    float numero;
   
    printf("Insira um numero ");
    scanf("%f",&numero);
   printf("A raiz quadrada de %.0f é %.0f \n",numero,raiz_quadrada(numero));
   
   
 //raiz quadrada pela funçao base do math.h
    raiz = sqrt(numero);
    printf("A raiz quadrada pela funçao predefinida eh: \n %.0f", raiz);
    

    return(0);
}    
   


float raiz_quadrada (float numero)
{
    int n;
    float recorre = numero;
   
    for (n = 0; n < 10; ++n)
          recorre = recorre/2 + numero/(2*recorre);
           
    return(recorre);    
}    
