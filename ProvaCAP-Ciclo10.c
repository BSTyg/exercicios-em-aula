/*Nome: Nathalia Cristina Santos
RA: 795698
Data de Criaçao: 02/12/2020
Objetivo: Uso e manipulacao de numeros reais em c. Prova do Ciclo 10*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define MIN(a,b)      (r1 < r2 ? r1 : r2)
#define BUF_SIZE      32

struct tRacional {
   int n; /* numerador */
   int d; /* denominador */
};

typedef struct tRacional racionais;

void *xmalloc(size_t n)
{
   void *p = malloc(n);
   if(!p) {
      perror("malloc");
      exit(EXIT_FAILURE);
   }
   return p;
}

int racional(int r1, int r2)
{
   register int i;

   /*se 0, returna 1 */
   if(!r1 || !r2) return 1;

   for(i = MIN(r1,r2); i >= 1; i--) 
      if(!(r1 % i) && !(r2 % i)) break;

   return i;
}

racionais *escreva_racional(int n, int d)
{
   racionais *r = xmalloc(sizeof *r);
   r->n = n;
   r->d = d;
   return r;
}
//simplificacao
racionais *simplifica_racional(racionais *r)
{
   int m = racional(r->n, r->d);

   r->n /= m;
   r->d /= m;

   return r;
}

racionais *soma_racional(racionais *r1, racionais *r2)
{
   racionais *r = xmalloc(sizeof *r);

   r->n = (r1->n * r2->d) + (r2->n * r1->d);
   r->d = r1->d * r2->d;

   return simplifica_racional(r);
}
//subtracao
racionais *subtrai_racional(racionais *r1, racionais *r2)
{
   racionais *r = xmalloc(sizeof *r);

   r->n = (r1->n * r2->d) - (r2->n * r1->d);
   r->d = r1->d * r2->d;

   return simplifica_racional(r);
}
//divisao
racionais *divide_racional(racionais *r1, racionais *r2)
{
   racionais *r = xmalloc(sizeof *r);

   r->n = r1->n * r2->d;
   r->d = r1->d * r2->n;

   return simplifica_racional(r);
}
//multiplicacao
racionais *multiplica_racional(racionais *r1, racionais *r2)
{
   racionais *r = xmalloc(sizeof *r);

   r->n = r1->n * r2->n;
   r->d = r1->d * r2->d;

   return simplifica_racional(r);
}

int read_int(char *label) {
   char buffer[BUF_SIZE];
   fprintf(stderr, label);
   fgets(buffer, BUF_SIZE, stdin);
   return atoi(buffer);
}
//ler os numeros 
racionais *leia_racional(void)
{
   int r1, r2;

   r1 = read_int("Numerador  : ");
   r2 = read_int("Denominador: ");
   printf("\n");

   return escreva_racional(r1, r2);
}

void print_racional(char *label, racionais *r)
{
   printf("%s: %d/%d\n", label, r->n, r->d);
}

int main(int argc, char *argv[])
{
   racionais *r1, *r2, *adicao, *sub, *multi, *div;

   r1 = leia_racional();
   r2 = leia_racional();

   adicao = soma_racional(r1, r2);
   sub = subtrai_racional(r1, r2);
   multi = multiplica_racional(r1, r2);
   div = divide_racional(r1, r2);

  //imprimindo os resultados 
   print_racional("Primeira fracao  ", r1);
   print_racional("Segunda fracao  ", r2);
   print_racional("adicao", adicao);
   print_racional("subtracao", sub);
   print_racional("multiplicacao", multi);
   print_racional("divisao", div);

  //liberando a memoria
   free(r1);
   free(r2);
   free(adicao);
   free(sub);
   free(multi);
   free(div);

   return 0;
}