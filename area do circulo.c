/*Autor: Nathalia Cristina Santos
RA: 795698
Data de criação: 02/10/2020
Data de atualização: 02/10/2020
Objetivos: calcular a area de um circulo*/

#include<stdio.h>

   double raio, area;
   
int main()

{
 
    printf("insira o raio\n");
    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;
    printf("A=%.4lf\n", area);
    
    
    return 0;
}