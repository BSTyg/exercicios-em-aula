/*programa em C que leia dois valores x e y que formam um ponto na
coordenada cartesiana e apresente os valores que representam o mesmo ponto nas coordenadas polares.*/

#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main()
{
	 float x, y, r, theta;
	 
	
	 printf("Enter radius of polar coordinate (r): ");
	 scanf("%f", &r);
	 printf("Enter angle of polar coordinate in degree (theta): ");
	 scanf("%f", &theta);
	
	 /* Converting theta from degree to radian */
	 theta = theta * PI/180.0;
	
	 /* Calculating cartesian coordinate x */
	 x = r * cos(theta);
	
	 /* Calculating cartesian coordinate y */
	 y = r * sin(theta);
	
	 printf("Cartesian coordinates is: (%0.3f, %0.3f)", x, y);


}