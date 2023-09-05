#include <stdio.h>
	int main(){
		float n1, n2, med;
		
		printf("Escreva a pimerira nota: ");
		scanf("%f",&n1);
		
		printf("Escreva a segunda nota: ");
		scanf("%f",&n2);
		
		med = (n1 + n2) / 2;
		
		if(n1 < 0 && n1 > 10){
			printf("%.1f Nota invalida", n1);
		}
		else if(n2 < 0 && n2 > 10){
			printf("%.1f Nota invalida", n2);
		}
		else if(med >= 5 ){
			printf("%.1f, Aprovado", med);
		}
		else{
			printf("%.1f, Reprovado", med);
		}
		
	}
