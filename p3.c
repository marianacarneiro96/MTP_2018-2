/*P3.c
Nome: Mariana Soares Carneiro
Numero Matricula: 11811EBI012
*/

#include <stdio.h>

int arg1(int num1)
{
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num1);
	return num1;
}

int arg2( int num2)
{
	printf("\nDigite outro numero inteiro: ");
	scanf("%d", &num2);
    return num2;
}

int dec_bi(int num)
{
	int i, j, vetor_num[256];
	getchar();
	while(num > 0)
	{
		vetor_num[i]=num%2;
		i++;
		num=num/2;
	}
	printf("(");
	for(j = i - 1; j >= 0; j--)
	{printf("%d", vetor_num[j]);}
	printf(")");
}

int main ()
{
	int option, num1, num2, i=0, j=0, aux=0;
	printf("**CALCULADORA DE OPERACOES BITWISE**");
	printf("\n Digite: \n1)NOT \n2)AND \n3)OR \n4)XOR \n5)Right Shif \n6)Left Shift \n7)Sair do programa\n");
	scanf("%d", &option);
	switch(option)
	{
		case 1:
			num1=arg1(num1);
			if(num1 < 0)
				{num1=num1*(-1);}
			dec_bi(num1);
			printf(" : ");
			num1 = ~num1;
			printf("NOT %d ", num1);
			if(num1 < 0)
				{num1=num1*(-1);}
			num1=dec_bi(num1);
			break;
		case 2:
            num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	dec_bi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    dec_bi(num2);
		    printf(" : ");
		    aux = num1 & num2;
		    printf("AND %d ", aux);
			aux=dec_bi(aux);
			break;
		case 3:
			num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	dec_bi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    dec_bi(num2);
		    printf(" : ");
		    aux = num1 | num2;
		    printf("OR %d ", aux);
			aux=dec_bi(aux);
     		printf(")");
			break;
		case 4:
			num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	dec_bi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    dec_bi(num2);
		    printf(" : ");
		    aux = num1 ^ num2;
		    printf("XOR %d ", aux);
			aux=dec_bi(aux);
     		printf(")");
			break;
		case 5:
			num1=arg1(num1);
	    	dec_bi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
		    dec_bi(num2);
		    printf(" : ");
		    aux = num1 >> num2;
		    printf("Right Shift %d ", aux);
			aux=dec_bi(aux);
			break;
		case 6:
			num1=arg1(num1);
			if(num1 < 0)
	    		{num1=num1*(-1);}
	    	dec_bi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
	    		{num2=num2*(-1);}
		    dec_bi(num2);
		    printf(" : ");
		    aux = num1 << num2;
		    printf("Left Shift %d ", aux);
			aux=dec_bi(aux);
			break;
		case 7:
			return 0;
	}
}
