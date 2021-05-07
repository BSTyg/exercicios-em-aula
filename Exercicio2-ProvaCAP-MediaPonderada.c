/**************************
Autor: Nathalia Cristina Santos 
Data de criação: 05/10/2020
Data de Atualização: 05/10/2020
Objetivos: media ponderada
***************************/

#include <stdio.h>
#include <stdlib.h>

    int nota1, nota2, nota3, MediaPonderada;
    /*os pesos para o calculo desse exercicio ja foram previamente informados no cabeçalho do problema:
    2
    1 
    3 
    */

int main(){
    
    printf("Por favor insira suas notas\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    
    //calculo da Media Ponderada
    
    MediaPonderada = (nota1*2+nota2*1+nota3*3)/(2+1+3);
    
    //apuração dos resultados
    
    printf("A media Ponderada das notas desse aluno é: %.2d\n", MediaPonderada);
    
    return 0;
}
