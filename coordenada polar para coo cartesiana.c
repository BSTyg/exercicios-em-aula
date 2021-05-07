/*programa em C que leia dois valores D e Theta que formam um ponto na
coordenada polar e apresente os valores que representam o mesmo 
ponto na coordenadaa cartesiana.*/

#include <math.h>
#include <stdio.h>

int main(){
    
    float x, y, r, teta;

    scanf("%f", &x);
    scanf("%f", &y);
    
    r= sqrt(x*x+y*y);
    
    teta = atan(y/x);
    
    teta= 180.0 * teta/3.141592;
    
    printf("%5.2f\n", r);
    printf("%5.2f", teta);

    
    
}