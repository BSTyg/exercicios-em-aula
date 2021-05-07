#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



int main() 
{

int *X = (int*) malloc(sizeof(int));
float *consumo = (float*) malloc(sizeof(float));
float *Y= (float*) malloc(sizeof(float));;

consumo = (float*) malloc(*X*sizeof(float));
scanf("%d %f", X, Y);
if(X == NULL){
  printf("erro: sem memoria");
  exit(1);
}else
printf("%.3f km/l\n", *X / *Y);

return 0;

}