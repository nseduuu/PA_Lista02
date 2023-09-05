#include <stdio.h>

int main(){
	int n1, n2, n3;
  
printf("Digite o primeiro numero: ");
scanf("%d", &n1);
printf("Digite o segundo numero: ");
scanf("%d", &n2);
printf("Digite o terceiro numero: ");
scanf("%d", &n3);
  

    if (n1 == n2 && n1 == n3) {
        printf("Tres numeros iguais\n");
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3) {
        printf("Dois dos tres sao iguais\n");
    }
    else {
        printf("Tres numeros diferentes\n");
	}
}

