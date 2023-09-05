#include <stdio.h>

int main() {
   float salario, inss;

   printf("Digite o salário do contribuinte: ");
   scanf("%f", &salario);

   if (salario <= 1247.70) {
      inss = salario * 0.08;
   } else if (salario <= 2079.50) {
      inss = salario * 0.09;
   } else if (salario <= 4159.00) {
      inss = salario * 0.11;
   } else {
      inss = 468.00;
   }

   printf("O valor do INSS a ser pago é: %.2f\n", inss);

}

