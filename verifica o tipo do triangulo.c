//leia as medidas dos ângulos internos de um  triângulo e informe se ele é RETANGULO, ACUTANGULO ou OBTUSANGULO


#include <stdio.h>

int main(){
    
    int A, B, C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

   if ((A + B + C) != 180) {
        printf("ERRO");
    }

    else if ( (A == 90) ||  (B == 90) || (C == 90) ) {
       printf("RETANGULO"); 
       }
    if ( (A < 90) &&  (B < 90) && (C < 90) ) {
        printf("ACUTANGULO");
    }
     if ( (A > 90) &&  (B > 90) && (C > 90) ) {
      printf(" OBSUTANGULO");
     }   
   
}