/**************************
Autor: Nathalia Cristina Santos 
Data de criação: 18/03/2021
Data de Atualização: 18/03/2021
Objetivos: Calcula a altura de um morro de acordo com o angulo informado

***************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float Alfa, Beta, DistPercorrida, AlturaAlfa, AlturaBeta, Distancia, Altura;

//obtenção dos dados para o exercicio

    printf ("Por favor, insira os seguintes dados para que seja possivel a resolucao de seu problema\n");
    printf ("Informe o angulo inicial");
    scanf ("%f", &Alfa);
    printf ("E o angulo final");
    scanf ("%f", &Beta);
    printf ("E qual a distancia percorrida?");
    scanf ("%f", &DistPercorrida);

//calculo das tangentes

    AlturaAlfa =  tan(Alfa*M_PI/180);
    AlturaBeta =  tan(Beta*M_PI/180);

//calculo da distancia

    Distancia = (AlturaAlfa*DistPercorrida)/(AlturaBeta-AlturaAlfa);

//calculo da altura do morro (Altura)

    Altura = AlturaAlfa*(DistPercorrida+Distancia);
    printf("Distancia ate o morro: %f\n", Distancia);
    printf("E a altura do morro:  %f\n", Altura);

system("PAUSE");
return 0;
}