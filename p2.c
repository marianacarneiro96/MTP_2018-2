/* P2.c */ 
/* Mariana Soares Carneiro */ 
/* 11811EBI012 */ 


#include <stdio.h>

void numbinario(int vet[], char base[]){
	int v, soma=0,pot=1,i,c;
	for(i=0;base[i]!='\0';i++)
	{
		if(base[i]!='1'&&base[i]!='0')
		{
			printf("\nCodigo declarado nao existe nesta base, escolha novamente "
			"no menu que conversao deseja fazer");
			break;
		}
	}
	for(v=i-1;v>=0;v--){
		pot=1;		
		if(base[v]=='0'){vet[v]=0;}
		else{
			for (c=0;c<=i-v-2;c++)
			{
   	 			pot*=2;
			}
			vet[v]=pot;
		}
		soma+=vet[v];
	}
	printf("\n O codigo digitado em binario: %s, corresponde ao valor: %d em decimal\n\n", base, soma);
}

void Binario_hex(int vet[], char base[]){
	int v, soma=0,pot=1,i, c, result[256];;
	for(i=0;base[i]!=0;i++)
	{
		if(base[i]!='1'&&base[i]!='0')
		{
			printf("\n Codigo inexistente nesta base, escolha novamente ");
			break;
		}
	}
	for(v=i-1;v>=0;v--){
		pot=1;
		if(base[v]=='0'){vet[v]=0;}
		else{
			for (c=0;c<=i-v-2;c++)
			{
   	 			pot*=2;
			}
			vet[v]=pot;
		}
		soma+=vet[v];
	}	
	
	for(i=0;soma>=1;i++)
	{
		result[i]=soma%16;
		soma=soma/16;
	}
	printf("\n O codigo: %s, corresponde em hexadecimal: ", base);
	for(c=i-1;c>=0;c--)
	{
		if(result[c]<=9)
		{	printf("%d", result[c]);}
		if(result[c]>9)
		{
			result[c]+=55;
			printf("%c",result[c]);
		}
	}
}

void hexadeci(int vet[], char base[]){
	int v, soma=0,pot=1,i,c;
	for(i=0;base[i]!='\0';i++)
	{	
		if (base[i]>='a'&&base[i]<='z'){base[i]-=32;}
	}
	for(v=i-1;v>=0;v--){
		pot=1;
		if(base[v]=='0'){vet[v]=0;}
		else{
			for (c=0;c<=i-v-2;c++)
			{
   	 			pot*=16;
			}
			if(base[v]>='A'&&base[v]<='F'){	vet[v]=pot*(base[v]-55);}
			else if(base[v]>='0'&&base[v]<='9'){vet[v]=pot*(base[v]-48);}
		}
		soma+=vet[v];
	}
	printf("\n O codigo: %s, corresponde ao valor: %d em decimal\n\n", base, soma);
}

void hexabin(int vet[], char base[]){
	int v, soma=0,pot=1,i,c, result[256];
	for(i=0;base[i]!='\0';i++)
	{	
		if (base[i]>='a'&&base[i]<='z'){base[i]-=32;}
	}
	for(v=i-1;v>=0;v--){
		pot=1;
		if(base[v]=='0'){vet[v]=0;}
		else{
			for (c=0;c<=i-v-2;c++)
			{
   	 			pot*=16;
			}
			if(base[v]>='A'&&base[v]<='F'){	vet[v]=pot*(base[v]-55);}
			else if(base[v]>='0'&&base[v]<='9'){vet[v]=pot*(base[v]-48);}
		}
		soma+=vet[v];
	}
	printf("\n O codigo: %s, corresponde em binario:\n", base);
	for(i=0;soma>=1;i++)
	{
		result[i]=soma%2;
		soma=soma/2;
	}
	for(c=i-1;c>=0;c--){printf("%d", result[c]);}
}

void decibin(int num){
	int c,i, result[256];
	printf("\n O codigo : %d, corresponde em binario: ", num);
	for(i=0;num>=1;i++)
	{
		result[i]=num%2;
		num=num/2;
	}
	for(c=i-1;c>=0;c--){printf("%d", result[c]);}
}

void decihexa(int num){
		int c,i, result[256];
	printf("\n O codigo: %d, corresponde em hexadecimal: ", num);
	for(i=0;num>=1;i++)
	{
		result[i]=num%16;
		num=num/16;
	}
	for(c=i-1;c>=0;c--)
	{
		if(result[c]<=9)
		{	printf("%d", result[c]);}
		if(result[c]>9)
		{
			result[c]+=55;
			printf("%c",result[c]);
		}
	}
}

void octdeci(int vet[], char base[]){
	int v, soma=0,pot=1,i,c;
	for(i=0;base[i]!='\0';i++){}
	for(v=i-1;v>=0;v--){
		pot=1;
		if(base[v]=='0'){vet[v]=0;}
		else{
			for (c=0;c<=i-v-2;c++)
			{
   	 			pot*=8;
			}
			if(base[v]>='0'&&base[v]<'8'){vet[v]=pot*(base[v]-48);}
		}
		soma+=vet[v];
	}
	printf("\n O codigo: %s, corresponde ao valor: %d em decimal\n\n", base, soma);
}

void decioct(int num){
		int c,i, result[256];
	printf("\n O codigo: %d, corresponde em octal:\t", num);
	for(i=0;num>=1;i++)
	{
		result[i]=num%16;
		num=num/16;
	}
	for(c=i-1;c>=0;c--)
	{
		printf("%d", result[c]);		
	}
}

int main()
{	
	char base[256];
	int	caso, vet[256], num;
	printf("A fim de fazer conversoes corretamente, digite apenas valores pertecentes a base correta de origem");
	do{

		printf("\n\n\tConversor de bases \n\n Escolha o tipo de conversao que deseja fazer:\n1. Binario para Decimal"
			" \n2. Binario para Hexadecimal \n3. Hexadecimal para Decimal \n4. Hexadecimal para Binario "
			"\n5.Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octal\n9. Exit\nmenu: ");
		scanf("%d", &caso); getchar();
	
		switch(caso)
		{
			case 1:
				printf("Conversao de Binario para Decimal \nDigite o codigo desejado:\n");
				scanf("%s", base);
				getchar();
				numbinario(vet,base);
				break;
			case 2:
				printf("Conversao de Binario para Hexadecimal \nDigite o codigo desejado:\n");
				scanf("%s", base);
				getchar();
				Binario_hex(vet,base);
				break;
			case 3:
				printf("Conversao de Hexadecimal para Decimal \nDigite o codigo desejado:\n");
				scanf("%s", base);
				getchar();
				hexadeci(vet,base);
				break;
			case 4:
				printf("Conversao de Hexadecimal para Binario \nDigite o codigo desejado:\n");
				scanf("%s", base);
				getchar();
				hexabin(vet,base);
				break;	
			case 5:
				printf("Conversao de Decimal para Binario \nDigite o numero desejado:\n");
				scanf("%d",&num);
				getchar();
				decibin(num);
				break;
			case 6:
				printf("Conversao de Decimal para Hexadecimal \nDigite o numero desejado:\n");
				scanf("%d",&num);
				getchar();
				decihexa(num);
				break;
			case 7:
				printf("Conversao de Octal para Ddecimal \nDigite o numero desejado:\n");
				scanf("%s", base);
				getchar();
				octdeci(vet,base);
				break;
			case 8:
				printf("Conversao de Decimal para Octal \nDigite o numero desekado:\n");
				scanf("%d",&num);
				getchar();
				decioct(num);
				break;
		}
	}while(caso!=9);		
	return 0;
}
