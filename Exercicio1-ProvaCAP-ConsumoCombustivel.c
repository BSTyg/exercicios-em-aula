/**************************
Autor: Nathalia Cristina Santos 
Data de criação: 01/10/2020
Data de Atualização: 01/10/2020
Objetivos: Calcular o consumo de combustivel de um carro em uma determinada viagem
***************************/

#include <stdio.h>
#include <stdlib.h>

float LitrosPkm, KMs, gasolina, LitrosCombustivel, Combustivel;

int main (){

    /*para esse exercicio, nao foram considerado nenhum carro em especifico e o preco da gasolina e o valor de litros por km 
    foram pensados por mim.*/

   //coleta de dados para o exercicio

    printf("Informe quantos km serao percorridos nessa viagem\n");
    scanf("%f", &KMs);
    printf("Quantos km seu carro faz por litro de combustivel?\n");
    scanf("%f", &LitrosPkm);
    printf("Quanto custa a gasolina em R$ em sua regiao?\n");
    scanf("%f", &gasolina);

 //calculando quantos litros serao gastos na viagem e o gasto em R$ com combustivel

    LitrosCombustivel = LitrosPkm/KMs;
    Combustivel = gasolina*LitrosCombustivel;

    //apurando os resultados para o usuario

        printf("Litros gastos na viagem: %.2f\n",LitrosCombustivel);
        printf(" valor em reais necessarios para a gasolina %.2f\n", Combustivel);


    return 0;
}