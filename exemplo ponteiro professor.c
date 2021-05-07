/*

Autor: Prof. Ricardo Rodrigues Ciferri. 
Data de Criação: 03/07/2013.
Data de Atualização: 11/11/2020.

Objetivo: Demonstrar o uso de vetor de inteiros alocado dinamicamente.
          Leitura e escrita de dados do vetor.
          
Observação: Usando alocação dinâmica de memória.

*/

// Bibliotecas de funções predefinidas

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> // Biblioteca de alocação dinâmica de memória

// Declaração de variáveis e constantes globais

#define MAX_ALUNOS 40

// Função principal

int main(int argc, char *argv[])
{

  // Declaração de variáveis e constantes locais
  
  int *idadeAlunos; // ponteiro para um vetor de idade de alunos
  int nAlunos; // numero de alunos
  int i; // contador de laço
  
  // Leitura do total de alunos e validação
  
  do 
  {
     printf("Digite o numero de alunos (maximo de %d alunos): ", MAX_ALUNOS);
     fflush(stdin);
     scanf("%d", &nAlunos);
     if ((nAlunos < 1) || (nAlunos > MAX_ALUNOS)) {
       printf("O numero de aluno %d esta incorreto.\n", nAlunos);
       printf("Valor entre 1 e %d\n\n", MAX_ALUNOS);
     }  
  } while((nAlunos < 1) || (nAlunos > MAX_ALUNOS));
  printf( "\n");

  
  // Alocação dinâmica do vetor de idade de alunos
  
  idadeAlunos = (int*) malloc(nAlunos*sizeof(int));
  // idadeAlunos = (int*) calloc(nAlunos, sizeof(int));
 
  // Verificar se alocação de memória foi realizada corretamente
    
  if (idadeAlunos == NULL) {
    printf("Alocacao de memoria para o vetor idadeAlunos falhou ...\n\n");
    exit (1);
  } 
 
  // Leitura da idade de cada aluno
  
  printf("Leitura de dados:\n");
  for(i=0; i<nAlunos; i++) {
    printf("Digite a idade do aluno %d : ", i+1);
    fflush(stdin);
    scanf("%d", &idadeAlunos[i]);
  }
  printf( "\n");

  
  // Escrita da idade de cada aluno
  
  printf("Escrita de dados:\n");
  for (i=0; i<nAlunos; i++)
    printf("A idade do aluno %d = %d\n", i+1, idadeAlunos[i]);
 
  // Liberação de espaço alocado dinamicamente
  free(idadeAlunos);
 
  // Finalização do programa
  
  system("PAUSE");	
  return 0;
}