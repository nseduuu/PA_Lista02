#include <stdio.h>
	int main(){
		float n1;
		
		printf("Escreva um numero: ");
		scanf("%f", &n1);
		
		
		if(n1 > 0){
			printf("%.1f Positivo", n1);
		}
		else if(n1 < 0){
			printf("%.1f Negativo", n1);
		}
		else{
			printf("%.1f Nulo", n1);
		}
	}
