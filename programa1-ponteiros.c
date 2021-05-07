/******************************************************************************
Programa 1 sobre Ponteiros 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    int codFunc1 = 10;
    int idadeFunc1 = 35;
    int codFunc2 = 11;
    int idadeFunc2;
    
    //declaração de um Ponteiro
    int *pont_idadeFunc; //ponteiro para a variavel idadeFunc1
    
    //impressao dos dados do funcionario 1
    printf("Os dados do funcionario 1 sao:\n");
    printf("codigo: %d\n", codFunc1);
    printf("idade: %d\n", idadeFunc1);
    printf("o endereco de idadeFunc1 e: %p\n", &idadeFunc1);
    printf("\n");
    
    //uso do ponteiro
    pont_idadeFunc = &idadeFunc1;
    idadeFunc1 = *pont_idadeFunc;
    
    //impressao dos dados do funcionario 2 
    printf("os dados do funcionario 2 sao:\n");
    printf("codigo: %d\n", codFunc2);
    printf("idade: %d\n", idadeFunc2);
    printf("o endereco de idadeFunc2 e: %p\n", &idadeFunc2);
    printf("\n");
    
    //uso do ponteiro
    *pont_idadeFunc = 20;
    
    //impressao dos dados dos funcionarios 1 e 2
    
    printf("os dados do funcionario 1 sao:\n");
    printf("codigo: %d\n", codFunc1);
    printf("idade: %d\n", idadeFunc1);
    printf("o endereco de idadeFunc1 e: %p\n", &idadeFunc1);
    printf("\n");
    
    printf("os dados do funcionario 2 sao:\n");
    printf("codigo: %d\n", codFunc2);
    printf("idade: %d\n", idadeFunc2);
    printf("o endereco de idadeFunc2 e: %p\n", &idadeFunc2);
    
    system("PAUSE");
    return 0;
    
}
