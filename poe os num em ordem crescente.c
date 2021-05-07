//leia 3 valores inteiros distintos e os coloque em ordem crescente.

#include <stdio.h>

int main() 
{
  int n1, n2, n3;       
  
  scanf("%d %d %d", &n1, &n2, &n3);
  
  if (n1 <= n2 && n2 <= n3)
    {
      printf(" %d\n", n1);
      printf(" %d\n", n2);
      printf(" %d\n", n3);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf(" %d\n", n1);
      printf(" %d\n", n3);
      printf(" %d\n", n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf(" %d\n", n2);
      printf(" %d\n", n3);
      printf(" %d\n", n1);
    }
  else if (n2 <= n3 && n3 <= n1) 
    {
      printf(" %d\n", n2);
      printf(" %d\n", n3);
      printf(" %d\n", n1);
    }
  else if (n3 <= n1 && n1 <= n2) 
    {
      printf(" %d\n", n3);
      printf(" %d\n", n1);
      printf(" %d\n", n2);
    }
  else /* n3 <= n2 && n2 < n1 */
    {
      printf(" %d\n", n3);
      printf(" %d\n", n2);
      printf(" %d\n", n1);
    }

  return 0;
}