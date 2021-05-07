/*Autor: Nathalia Cristina Santos
RA: 795698
Data de criação: 10/10/2020
Data de atualização: 10/10/2020
Objetivos: resto 2*/

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);
    for(i = 1; i <10000; i++);
    {
        if(n%i == 2)printf("%d\n", i);
    }
     
    return 0;
}