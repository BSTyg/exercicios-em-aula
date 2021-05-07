/******************************************************************************
inverte as vogais
*******************************************************************************/

#include <stdio.h>

int main(){
    char vogais[]={'a','e','i','o','u'};
    char *p_vogais;
    char **p_Pvogais;
    register int i;
    int tamanho;
    
    p_vogais = vogais;
    p_Pvogais = &p_vogais;
    
    tamanho = sizeof(vogais);
    
    /* Usando o vetor para apresentar os valores na tela */
    for(i = 0; i < tamanho ; i++)
          printf("%c ", vogais[i]);
    
    printf("\n\n");
    /* Usando o ponteiro que aponta para o vetor vogais para 
     * apresentar valores na tela */
    for(i = 0; i < tamanho ; i++)
          printf("%c ", *(p_vogais + i));
     
     printf("\n\n");
     /* Usando o ponteiro para o ponteiro para apresentar os
      * valores na tela */
     for(i = 0; i < tamanho ; i++)
           printf("%c ", *(*p_Pvogais + i));
           
     return 0;
}
 