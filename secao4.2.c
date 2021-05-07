#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    /*definicao da estrutura de funcionarios com os campos 
    CodFunc, IdadeFunc, SexoFunc e SalFunc*/
    
    struct funcionario
    {
        int codFunc;
        int idadeFunc;
        char sexoFunc;

        float salFunc;
    };

    //declaracao de duas variaveis do tipo estrutura
    struct funcionario funcionario1;
    struct funcionario funcionario2;

    //entrada de dados do funcionario 1

    printf("A segur entre com todos os dados do funcionario\n\n");
    printf("Digite o codigo:");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite a idade");
    scanf("%d", &funcionario1.idadeFunc);
    printf("Digite o sexo [F ou M]:");
    scanf("%*c%c", &funcionario1.sexoFunc);
    printf("Digite o salario (R$):");
    scanf("%f", &funcionario1.salFunc);
    printf("\n");

    //saida de dados do funcionario 1 para a tela (monitor de video)

    printf("Os dados do funcionario 1 sao: \n\n");
    printf("codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    //atribuicao dos dados do funcionario 1 para o funcionario 2 
    
    funcionario2 = funcionario1;

    //saida de dados do funcionario 2 para a tela

    printf("Os dados do funcionario 2 sao: \n\n");
    printf("Codigo: %d\n", funcionario2.codFunc);
    printf("Idade: %d\n", funcionario2.idadeFunc);
    printf("Sexo: %c\n", funcionario2.sexoFunc);
    printf("\n");

    //finalizacao do programa principal 

    system ("PAUSE");
    return 0;

    }