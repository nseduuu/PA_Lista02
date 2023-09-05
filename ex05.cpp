#include <stdio.h>
	int main(){
		float n1, n2, med;
		
		printf("Escreva a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Escreva a segunda nota: ");
		scanf("%f", &n2);
		
		med = (n1 + n2) / 2;
		
		if( med < 5 ){
			printf("%.1f Reprovado", med);
		}
		else{
			printf("%.1f Aprovado", med);
		}
	}
