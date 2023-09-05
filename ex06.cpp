#include <stdio.h>
	int main(){
		float n1;
		
		printf("Escreva a primeira nota: ");
		scanf("%f", &n1);
		
		if(n1 >= 0 && n1 <= 10){
			printf("%.1f Nota valida", n1);
		}
		else{
			printf("%.1f Nota invalida", n1);
		}
	}
