#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//mostra o numero da letra de acordo com a tabela ask

int main(void){

// declaracao de variavel
 int nota1, nota2, nota3, media;

 printf("insira as notas\n");
 scanf(" %d %d %d", &nota1, &nota2, &nota3);
 //mostrando o resultado
media = (nota1+nota2+nota3)/3;
 printf(" a media do aluno eh %d\n", media);
 
if(media > 7){
  printf("o aluno foi aprovado\n");
}else (printf("o aluno foi reprovado"));

}