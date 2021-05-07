/*Autor: Nathalia Cristina Santos
RA: 795698
Data de criação: 15/10/2020
Objetivos: Calcular o fatorial de um numero*/

#include <stdio.h>
 
int main()
{
int fat, n;
printf("Insira um valor: \n");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial: %d\n", fat);
return 0;
}