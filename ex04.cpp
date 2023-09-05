#include <stdio.h>
	int main(){
		
		int n1, n2;
		
		printf("Escreva o primeiro numero....: ");
		scanf("%d",&n1);
		printf("Escreva o segundo numero.....: ");
		scanf("%d",&n2);
		
		if(n1 > n2)
		{
			printf("O numero %d eh maior",n1);
		}
		else
		{
			printf("O numero %d eh maior",n2);
		}
	}
