#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// cálculo da distância
 float func_distancia(float par_distancia)
 {
 float x1, x2, y1, y2;
 printf("Informe as coordenadas na seguinte ordem: x1, x2, y1, y2 \n\n");
 scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
 par_distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 return par_distancia;
}
// função principal
int main (void)
{
 // Declaração de variáveis locais
 float distancia;
 printf("A distancia eh = %f \n\n", func_distancia(distancia));
 // Finalização do programa
 system("PAUSE");
 return 0;
}
