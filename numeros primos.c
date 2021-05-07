/*Nathalia Cristina Santos
Data de criação: 17/10/2020
Data de atualização: 17/10/2020
Objetivos: Exercicio proposto 2- Numero primo*/

#include<stdio.h>
#include <locale.h>
 
int main() 
{
 setlocale(LC_ALL, "");
 int x, i, resp = 0;
 
 printf("insira um número: ");
 scanf("%d", &x);
 
 for (i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
       resp++;
       break;
    }
 }
 
 if (resp == 0)
    printf("%d eh primo\n", x);
 else
    printf("%d não eh primo\n", x);
 
 return 0;
}
