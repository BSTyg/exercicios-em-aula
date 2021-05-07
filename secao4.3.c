#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    /*definicao da estrutura de funcionarios 
    com os campos codFunc, idadeFunc, sexoFunc, e salFunc*/

    struct funcionario
    {
        int codFunc;
        int idadeFunc;
        char sexoFunc;

        float salFunc;
    };

    //declaracao de variaveis
    struct funcionario funcionario1;
    struct funcionario funcionario2;
    struct funcionario *pontFunc;

    //entrada de dados do funcionario 1

    printf("A seguir entre com todos os dados do funcionario.\n\n");
    printf("Digite o codigo:");
    scanf("%d", &funcionario1.codFunc);
    printf("Digite a idade:");
    scanf("%d", &funcionario1.idadeFunc);

    printf("Digite o sezo [F ou M]");
    scanf("%*c%c", &funcionario1.sexoFunc);
    printf("Digite o salario (R$)");
    scanf("%f", &funcionario1.salFunc);
    printf("\n");

    //saida de dados do funcionario 1 para a tela

    printf("Os dados do funcionario 1 sao: \n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("idade: %d\n", funcionario1.idadeFunc);
    printf("sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    //uso do ponteiro para estrutura

    pontFunc = &funcionario1;

    //uso do operador seta pra a manipulacao de campos

    funcionario2.codFunc = 99;
    funcionario2.idadeFunc = pontFunc -> idadeFunc;
    funcionario2.sexoFunc = pontFunc -> sexoFunc;
    funcionario2.salFunc = pontFunc -> salFunc*1.5;

    //saida de dados do funcionario 2 para a tela 

    printf("Os dados do funcionario 2 sao: \n\n");
    printf("Codigo: %d\n", funcionario2.codFunc);
    printf("idade: %d\n", funcionario2.idadeFunc);
    printf("sexo: %c\n", funcionario2.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario2.salFunc);
    printf("\n");

    //alteracao do conteudo de alguns campos do funcionario 1 
    //usando ponteiro

    pontFunc -> codFunc = 79; // (*pontFunc).codFunc = 79
    pontFunc -> idadeFunc = 25; // (*pontFunc).idadeFunc = 25

    //saida de dados do funcionario 1 para a tela

    printf("Os dados do funcionario 1 sao: \n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("idade: %d\n", funcionario1.idadeFunc);
    printf("sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    //finalizacao do programa principal

    system("PAUSE");
    return 0;
}