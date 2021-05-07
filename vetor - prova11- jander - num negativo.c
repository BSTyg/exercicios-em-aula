/* Considere a seguinte estrutura de dados:

struct info{
    int tamanho;
    int dado[TAMANHO_MAXIMO];
};
Ela mantém os dados no campo dado, sendo válidos apenas os 
tamanho primeiros elementos.
Os demais elementos contém lixo.

Escreva uma função considerando:

A função deve ter nome altere_dados;
A função deve ser void e receber um struct info por referência;
Todos os valores válidos negativos do vetor devem ser substituídos
pela soma de todos os elementos.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void altere_dados(struct info* dado){
	int soma = 0;
	bool tem_negativo = false;
	for(int i = 0; i < dado->tamanho; i++){
		soma += dado->dado[i];
		if(dado->dado[i] < 0)
		    tem_negativo = true;
	}

	if(tem_negativo)
		for(int i = 0; i < dado->tamanho; i++)
			if(dado->dado[i] < 0)
				dado->dado[i] = soma;
}