/******************************************************************************
Programa 1 da Unidade 3
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int  argc, char*argv[])
{
    int codFunc;
    int idadeFunc;
    float salFunc;
    int totalFunc;
    int somaIdade = 0;
    float somaSalario= 0;

    float IdadeMedia;
    float SalarioMedio;
    
    char tecla; //opcao para leitura de novos dados
    
    /*entrada de ddados dos funcionarios e calculos intermediarios*/
    
    printf("Deseja inserir os dados de um novo funcionario?\n");
    printf("[Tecle S ou s para continuar]:");
    scanf("%c", &tecla);
    printf("\n");
    
    totalFunc = 0;
    while(tecla =='S'|| tecla == 's')
    {
        //leitura dos dados do funcionario corrente
        printf("a seguir, entre com todos os dados do funcionario.\n\n");
        printf("digite o codigo: ");
        scanf("%d", &codFunc);
        printf("Digite a idade");
        scanf("%d", &idadeFunc);
        printf("Digite o salario (R$):");
        scanf("%f", &salFunc);
        printf("\n\n");
        fflush(stdin);
        
        //calculos intermediarios
        totalFunc++;
        somaIdade += idadeFunc;
        somaSalario += salFunc;
        
        //mudança da variavel de controle de laco
        printf("Deseja inserir os dados de um novo funcionario?");
        printf("[Tecle S ou s para continuar");
        scanf("%c", &tecla);
        printf("\n");
        }
        
        //calculo da idade media e do salario medio dos N funcionarios
        if(totalFunc>0)
        {
            IdadeMedia = (float)somaIdade / totalFunc;
            SalarioMedio = somaSalario / totalFunc;
        }
        else
        {
            IdadeMedia = 0;
            SalarioMedio = 0;
        }
        
        //saida dos dados calculados
        printf("os dados calculados sao:\n");
        printf("total de funcionarios = %d\n", totalFunc);
        printf("Idade media %.2f anos\n", IdadeMedia);
        printf("Salario medio %.2f reais\n", SalarioMedio);
        printf("\n");
        
    return 0;
}
