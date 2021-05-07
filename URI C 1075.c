#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main (){

int *cont = (int*) malloc(sizeof(int));
int *num = (int*) malloc(sizeof(int));

printf("insira o numero\n");

scanf("%d", num);
for(*cont=1;*cont<=10000;*cont++){
if((*cont/(*num))==2){
  *cont = (*cont/(*num));
printf("%d\n", *cont);
}
}

return 0;
}