/******************************************************************************
Nathalia Cristina
09/04/2021
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cabeçalho da função
float media3(float x1, float x2, float x3, char c);
int main() {
  
 // Declaração locaisi
 float nota1, nota2, nota3; 
 float media; 
 char tipo; 
 

 printf("Digite as tres notas: ");
 scanf("%f %f %f", &nota1, &nota2,&nota3 );
 printf("Digite o tipo de media (A, P ou H): ");
 scanf("%*c%c", &tipo);
 
 if (tipo == 'A' || tipo == 'P' || tipo == 'H') {
     
 // cálculo da média
 media = media3(nota1, nota2, nota3, tipo);

 printf("A media do tipo de media escolhida eh: %.2f\n", media);
 }
 else

 printf("Digite A, P ou H para calcular a media.\n");

 return 0;
}
// Função para média aritmética
float mediaAritmetica(float x1, float x2, float x3) {
 float media; 
 
 // média aritmética
 media = (x1 + x2 + x3) / 3;

 
 return media;
}
// Função para média ponderada
float mediaPonderada(float x1, float x2, float x3) {
 float media; 
 float peso1 = 5, peso2 = 3, peso3 = 2; 
 
 // formula média ponderada
 media = (x1 * peso1 + x2 * peso2 + x3 * peso3) / (peso1 + peso2 + peso3);
 
 return media;
}
// média harmônica
float mediaHarmonica(float x1, float x2, float x3) {
 float media; 
 media = 3 / ((1 / x1) + (1 / x2) + (1 / x3));

 // Retorno do resultado
 return media;
}
// Função para calcular 3 tipo de média
float media3(float x1, float x2, float x3, char c) {
 if (c == 'A')
 return mediaAritmetica(x1, x2, x3);
 else if (c == 'P')
 return mediaPonderada(x1, x2, x3);
 else if (c == 'H')
 return mediaHarmonica(x1, x2, x3);
 else
 return -1;
}
