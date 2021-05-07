#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main (){

float *num = (float*) malloc(sizeof(float));
int *val = (int*) malloc(sizeof(int));
int *cont = (int*) malloc(sizeof(int));

printf("insira os numeros");
    for(*cont=1;*cont <=6;cont++)
    {
    scanf("%f",num);
        if(*num>=0)
        {   
        *val=*val+1;
        }
    }
    printf("%d valores positivos\n",*val);

    return 0;
}