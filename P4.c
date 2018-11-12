/* P4.c */
/* Mariana Soares Carneiro */
/* 11811EBI012 */

#include <stdio.h>

double funcao(float i, float j)
{
	if(i==0) 
		return j+1;
	else if(i>0 && j==0) 
		funcao(i-1,1);
	else if(i>0 && j>0) 
		funcao(i-1, funcao(i, j-1));
}

int main ()
{
	float i, j;
	scanf ("%f + %f", &i, &j);
	printf("%g + %g = %g", i, j, funcao(i,j));
	return 0;
}
