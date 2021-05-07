/******************************************************************************
Nathalia Cristina Santos.

Estudo sobre funções

*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void borda(){
  printf("\n|||||||||||||||||||||||||||||||||\n");
}

/*int bhaskara(int x1, int x2, int a){
   
  int b, delta;

  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);

  printf("os resultaos sao: %d %d", x1, x2);

  return 0;
}*/

/*
float bhaskaraDelta0(){
int a, b, delta, x1;
x1 = (-b - sqrt(delta)) / (2*a);
printf("\n X eh %d", x1);
return x1;
}*/

int main(){

int  a, b, c, delta, baskara;
int x1, x2;

  borda();
  printf("Olá, aqui, você poderá calcular o bhaskara para algum exercício seu!!");
  borda();

  printf("\nInsira os numeros\n");
  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);

  borda();

  printf("\nOs numeros Selecionados foram:\n");
  printf("%d\n %d\n %d\n", a, b, c);

  borda();


 delta = b*b - 4*a*c;
 printf("\n O delta eh %d\n", delta);

if (delta < 0){
  printf("Não dá pra resolver !! :(");
}
if (delta > 0){
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);

  printf("os resultaos sao: %d e %d", x1, x2);

}
else if ( delta == 0){
    x1 = (-b + sqrt(delta)) / (2*a);
    printf("O resultado eh %d",x1);
}


borda();

return 0;
}