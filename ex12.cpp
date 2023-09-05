#include <stdio.h>

int main() {
   float salario, ir;

   printf("Digite o salário do contribuinte: ");
   scanf("%f", &salario);

   if (salario <= 1710.78) {
      ir = 0.00;
   } else if (salario <= 2563.91) {
      ir = salario * 0.075 - 128.31;
   } else if (salario <= 3418.59) {
      ir = salario * 0.15 - 320.60;
   } else if (salario <= 4271.59) {
      ir = salario * 0.225 - 577.00;
   } else {
      ir = salario * 0.275 - 790.58;
   }

   printf("O valor do Imposto de Renda a ser pago é: %.2f\n", ir);

}

