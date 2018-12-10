/* P6.c */ 
/* Mariana Soares Carneiro */ 
/* 11811EBI012 */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265359
#define r 1

typedef struct {
  float x, y;
}Ponto;

int main(){
   int N, i;
   Ponto *xy;
   printf("Digite um numero N de pontos: ");
   scanf("%i", &N);
   getchar();
   xy= (Ponto *) malloc(N*sizeof(Ponto)); 
   printf("\n");
   for(i=0; i<N; i++){
     xy->x= r*cos(i*2.0*pi/(N-1));
     xy->y= r*sin(i*2.0*pi/(N-1));
     printf("(%.3f, %.3f) ", xy->x, xy->y);
   }
   printf("\n");
   free(xy);
   return 0;
}
