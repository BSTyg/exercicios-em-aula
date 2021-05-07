/* Escreva o código necessário para criar um vetor seguindo as restrições:

tipo base double;
nome vet;
capacidade para n elementos, sendo n uma variável que você deve declarar e ler

(o nome desta variável é irrelevante);
todas as posições devem ser preenchidas com −1.
Assuma que n sempre é maior que zero.
O vetor tem que ter exatamente n elementos.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho;
scanf("%d", &tamanho);

double vet[tamanho];

for(int i = 0; i < tamanho; i++)
    vet[i] = -1;
