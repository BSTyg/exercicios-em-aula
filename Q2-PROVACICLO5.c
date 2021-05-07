/*Nathalia Cristina Santos
RA: 795698
Data de criação: 11/10/2020
Data de atualização: 11/10/2020
Objetivos: Questao 2 da prova do Ciclo 5 da prova de CAP: ler as informaçoes e informar qual o tipo de triangulo*/

#include <stdio.h>
#include <math.h>

int main (int argc, char** argv)
{
    //recebimento de informaçoes para o exercicio

    int  a, b, c;
    

    printf("Informe a, b, c, para os calculos. Por favor nao confunda a ordem nos numeros\n");
    scanf(" %d %d %d", &a, &b, &c);
    if ((a == b) && ( a == c))
       {
        printf(" Eh um triangulo equilatero\n");
       } 
    else if ((a != b) && (a != c) && (b != c))
    {
        printf("Eh um triangulo escaleno\n");  
    }
    else 
    {
        printf("Eh um triangulo isosceles\n");  
    }    
    
     return 0;
}