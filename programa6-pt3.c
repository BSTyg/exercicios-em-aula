/******************************************************************************
programa 6
algoritmo para gerar uma tabela de conversao celsius -> fahrenheit
para valores de 0 a 40, de 1 em 1
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
int celsius;
float fahrenheit;

    //repeticao para os valores indicados
    for (celsius=0;celsius<41;celsius++)
    {
        fahrenheit = celsius * 1.8 + 32;
        printf("%d <-> %.2f\n", celsius, fahrenheit);
    }
    
    system("PAUSE");    
    return 0;
}