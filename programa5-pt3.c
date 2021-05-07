/******************************************************************************
programa 5
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
float celsius, fahrenheit;

//geracao da tabela
celsius = 0;

do
{
    //calcula o valor convertido e escreve ambos
    fahrenheit = celsius* 1.8 + 32;
    printf("%f <-> &f\n", celsius, fahrenheit);
    
    //passa para o proximo valor em celsius
    celsius += 0.5;
}
    while (celsius <= 10);
    
    system("PAUSE");    
    return 0;
}
