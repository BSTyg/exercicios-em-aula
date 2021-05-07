/******************************************************************************
Programa 2
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    int codFunc;
    int idadeFunc;
    float salFunc;
    
    int totalFunc;
    int somaIdade = 0;
    float somaSalario = 0;
    
    float idadeMedia;
    float salarioMedio;
    
    char tecla;
    
    /*entrada de dados dos funcionarios e calculos intermediarios */
    totalFunc = 0;
    do
    {
        //leitura dos dados do funcionario corrente
        printf("a seguir, entre com todos os dados do funcionario.\n\n");
        printf("Digite o codigo:");
        scanf("%d", &codFunc);
        printf("Digite a idade;");
        scanf("%d", &idadeFunc);
        printf("Digite o salario;");
        scanf("%f", &salFunc);
        printf("\n\n");
        fflush(stdin);
        
        //calculos intermediarios
        totalFunc++;
        somaIdade += idadeFunc;
        somaSalario += salFunc;
        
        //mudanca da variavel de controle de laco
        printf("Desejo inserir os dados de um novo funcionario?\n");
        printf("[tecle S ou s para continuar]:");
        scanf("%c", &tecla);
        printf("\n");
        }
        while (tecla == 'S'||tecla == 's');
        
        //calculo da idade media e do salario medio dos funcionarios 
        
        if(totalFunc > 0)
        {
        idadeMedia = (float) somaIdade / totalFunc;
        salarioMedio = somaSalario / totalFunc;
        }
        else
        {
        idadeMedia = 0;
        salarioMedio = 0;
        }
        
        //saida dos dados calculados
        
        printf("os dados calculados sao:");
        printf("Total de funcionarios = %d\n", totalFunc);
        printf("idade media %.2f anos\n", idadeMedia);
        printf("salario medio %.2f reais\n", salarioMedio);
        printf("\n");
        
        //finalizacao do programa principal
        
    system("PAUSE");
    return 0;
}
