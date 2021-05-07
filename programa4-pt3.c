/******************************************************************************
programa 4
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    char nome[255];
    
    //primeiro nome a ser lido 
    printf("digite o nome:");
    scanf("%s", &nome);
    
    //repeticao que termina quando o nome for igual a "fim"
    while(strcmp(nome,"fim")!=0)
    {
        //escreve a saudacao
        printf("ola, %s, como vai\n\n", nome);
        
        //leitura do proximo nome
        printf("digite o nome:");
        scanf("%s", &nome);
    }

        //despedida
        printf("nao ha mais ninguem? entao, tchau!\n\n");
        
        system("PAUSE");
    return 0;
}

