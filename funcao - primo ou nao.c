#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int x)
{
 // Declarações Locais
 int NumDivisores;
 int i; // Contador temporário do comando for
 // Checagem do número para ser primo ou não
 NumDivisores = 0;
 for (i = 1; i <= x; i++)
 {
 if (x%i==0)
 NumDivisores++;
 }
 if (NumDivisores == 2)
 return 1;
 else
 return 0;
}