/******************************************************************************
calcular a soma dos n primeiros números dados pelo usuário na entrada
*******************************************************************************/
#include<stdio.h>

int somasem (int n)
{
   int s,i;
   s = 0;
   for(i=1; i <= n; i++){
     s = s + i;
    }
    return s;
}

int somacom(int num)
{
  if (num == 1) {
    return 1;
  }
  else {
    return num + somacom(num-1);
  }
}

int main() {
  int num;

  printf("\ndigite o numero:");
  scanf("%d", &num);
  printf("\n\nsomasem(%d) = %d", num, somasem(num));
  printf("\nsomacom(%d) = %d", num, somacom(num));
}
