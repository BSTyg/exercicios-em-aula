/*Autor: Nathalia Cristina Santos
Data de criação: 18/10/2020
Data de atualização: 18/10/2020
Objetivos: Calcular  a media aritimetica, ponderada ou harmonica de um aluno de acordo com sua letra*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    float nota1, nota2, nota3, aritmetica, ponderada, harmonica;
    char letra;

//requerimento dos dados necessarios
    printf("insira suas notas: \n");
    scanf("%f\n%f\n%f", &nota1, &nota2, &nota3);
    printf("informe a letra\n");
    scanf("%*c%c", &letra);

//condições para os calculos

if(letra == 'a')
{
    aritmetica = (nota1 + nota2 + nota3)/3;
    printf("Sua media aritmetica eh %f\n", aritmetica);
}
if (letra == 'p')
{
    ponderada = (5*nota1+3*nota2+2*nota3)/(5+3+2);
    printf("Sua media ponderada eh %f\n", ponderada);
}
if (letra == 'h')
{
    harmonica = 3/((1/nota1) + (1/nota2) + (1/nota3));
    printf("Sua media harmonica eh %f\n", harmonica);
}


}
