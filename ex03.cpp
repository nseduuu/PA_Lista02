#include <stdio.h>
	int main(){
	
	int numero;
	
	printf("Escreva um numero... :"); 
	scanf("%d",&numero);
	
	if(numero % 2 == 0)
	{
		printf("O numero %d eh par",numero);
	}
	else
	{
		printf("O numero %d eh impar",numero);
	}
	}
