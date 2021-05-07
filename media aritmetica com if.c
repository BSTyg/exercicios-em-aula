/******************************************************************************
nathalia cristina santos

media simples com condicao sobre aprovacao
*******************************************************************************/

#include<stdio.h>
#include <stdlib.h>


int main(){

float nota1, nota2, nota3, nota4, media;

printf("informe as suas respectivas notas\n");
scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

//calculando a media
media = (nota1 + nota2 + nota3 + nota4)/ 4;

//mostrando o resultado
printf("\nsua media eh %2.f", media);

//execucao do if
if (media >= 7){
  printf("\nparabens vc passou uhu\n");
}
else{
  printf("\nputs reprovado more\n");
}

  return 0;
}
