/*Nathalia Cristina Santos
RA: 795698
Data de criação: 11/10/2020
Data de atualização: 11/10/2020
Objetivos: Questao 3 da prova do Ciclo 5 da prova de CAP: ler as informaçoes e informar qual o tipo de triangulo (sem condicionais)*/

#include <stdio.h>
#include <math.h>

int main (int argc, char** argv)
{
  //recebimento de informaçoes para o exercicio

  float lado1, lado2, lado3;
  int validade, verdadeiro, equilatero, isosceles, escaleno;  


 printf("Insira o lado 1 do triângulo:\n");
scanf ("%f", &lado1);
 printf("Insira o lado 2 do triângulo:\n ");
scanf ("%f", &lado2);
 printf("Insira o lado 3 do triângulo:\n ");
scanf ("%f", &lado3);

validade = (lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2);
validade = verdadeiro;
printf("o triangulo existe? %d\n", validade);


equilatero =  validade && (lado1 = lado2) && (lado1 = lado3) && (lado2 = lado3);
printf("equilatero %d\n", equilatero);


isosceles = validade && !equilatero && (lado1 == lado2 || lado2 == lado3 || lado1 == lado3);
printf("isosceles %d\n", isosceles);


escaleno = verdadeiro && !equilatero && !isosceles;
printf("escaleno %d\n", escaleno);

     return 0;
}