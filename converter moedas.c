#include <stdio.h>
#include <stdlib.h>


int main (){

float moeda, conv, dolar, euro, libra;

printf("insira o valor a ser convertido\n");
scanf("%f", &moeda);

printf("qual moeda quer converter?\n");
scanf("%f", &conv);

if(conv == 1){
  dolar = (moeda/5.47);
printf("US$ = %.2f\n", dolar);
}
if(conv == 2){
  euro = (moeda/6.45);
printf("EUR = %.2f\n", euro);
}
if(conv == 3){
  libra = (moeda/7.47);
printf("libra = %.2f\n", libra);
}



return 0;
}