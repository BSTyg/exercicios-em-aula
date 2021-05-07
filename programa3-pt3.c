/******************************************************************************
Programa 3
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    int codFunc;
    int idadeFunc;
    float salFunc;
    
    const int totalFunc = 5;
    int somaIdade = 0;
    float somaSalario = 0;
    
    float idadeMedia;
    float salarioMedio;
    
    int i; //contador temporario do comando for
    
    /*entrada de dados dos funcionarios e calculos intermediarios */
    
    for(i = 0;i < 5;i++);
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
        somaIdade += idadeFunc;
        somaSalario += salFunc;
    }
        //calculo da idade media e do salario medio dos funcionarios 
       
        idadeMedia = (float) somaIdade / totalFunc;
        salarioMedio = somaSalario / totalFunc;
        
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
