/******************************************************************************
nathalia cristina santos

venda de loja com if para abono de salario
*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>


int main(){

float jan, fev, mar, abr, media;
float abono, abonoDepois;
float salario = 2300;

printf("informe as vendas do mes de janeiro\n");
scanf("%f", &jan);
printf("informe as vendas do mes de fevereiro\n");
scanf("%f", &fev);
printf("informe as vendas do mes de marco\n");
scanf("%f", &mar);
printf("informe as vendas do mes de abril\n");
scanf("%f", &abr);

//calculando a media
media = (jan + fev + abr + mar)/ 4;

//mostrando o resultado
printf("\nsua media eh %4.f", media);

//execucao do if
if (media >= 5000){
  printf("\nParabens\nRecebera um abono de 10 por cento\n");
  abono = salario * 0.10 ;
  printf("\nabono a receber %2.f\n", abono);
  abonoDepois = salario + abono;
  printf("\nabono depois %2.f\n", abonoDepois);
}
else{
  printf("\nParabens\nRecebera um abono de 3 por cento\n");
  abono = salario * 0.03 ;
  printf("\nabono a receber %2.f\n", abono);
  abonoDepois = salario + abono;
  printf("\nabono depois %2.f\n", abonoDepois);
}

  return 0;
}
