/* P6.c */ 
/* Anaísa Fonseca */ 
/* 11811ECP012 */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265359
#define k 1

typedef struct {
  float a, b;
}Ponto;

int main(){
   int N, i;
   Ponto *ab;
   printf("Digite um numero N de pontos: ");
   scanf("%i", &N);
   getchar();
   ab= (Ponto *) malloc(N*sizeof(Ponto)); 
   printf("\n");
   for(i=0; i<N; i++){
     ab->a= k*cos(i*2.0*pi/(N-1));
     ab->b= k*sin(i*2.0*pi/(N-1));
     printf("(%.3f, %.3f) ", ab->a, ab->b);
   }
   printf("\n");
   free(ab);
   return 0;
}
