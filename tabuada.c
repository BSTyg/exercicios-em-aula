/*Autor: Nathalia Cristina Santos
RA: 795698
Data de criação: 10/10/2020
Data de atualização: 10/10/2020
Objetivos: tabuada*/

#include <stdio.h>

int main()
{
    int i, N;
    
    scanf("%d", &N);
      i = 1;

    while(1 <= 10){
        printf("1+%d=%d\n", i, N, i*N);
        i++;
    }
    
    
    return 0;
}