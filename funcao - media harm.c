/******************************************************************************
Nathalia Cristina
09/04/2021
*******************************************************************************/

// Função de cal as medias 

  float func_media(float parametro_media)
 {
 float nota1, nota2, nota3, media_aritmetica, media_ponderada, media_harmonica;
 char letra;

 printf("Informe as 3 notas na seguinte ordem: nota1, nota2 e nota3\n\n");

 scanf("%f %f %f", &nota1, &nota2, &nota3);
 printf("Digite uma das seguintes letras: A, P ou H\n\n");

 scanf("%*c%c", &letra);
 media_aritmetica = (nota1 + nota2 + nota3)/3;
 media_ponderada = (nota1*5 + nota2*3 + nota3*2)/10;
 media_harmonica = 3/((1/nota1) + (1/nota2) + (nota3));
 if(letra=='A' || letra=='a')
 {
 return media_aritmetica;
 }
 else
 if(letra=='P' || letra=='p')
 {
 return media_ponderada;
 }
 else
 if(letra=='H' || letra=='h')
 {
 return media_harmonica;
 }
 else
 if((letra!='A' || letra!='a') && (letra!='P' || letra!='p') && (letra!='H' || letra!='h'))
 {
 printf("Digite apenas uma das letras: A ou a, P ou p e H ou h\n\n");
 }
}
// função main
int main (void)
{
 float media;

 printf("A media do aluno eh = %f\n\n", func_media(media));

 system("PAUSE");
 return 0;
}


 
