#include <stdio.h>

int main() {
   float av1, av2, av3, media;
   float menor;

   printf("Digite as três notas: ");
   scanf("%f %f %f", &av1, &av2, &av3);
   
   
   menor = av1;
   if (av2 < menor) {
      menor = av2;
   }
   if (av3 < menor) {
      menor = av3;
   }

   media = (av1 + av2 + av3 - menor) / 2.0;
   
   printf("A média do aluno é %.2f.\n", media);
   if (media >= 6.0) {
      printf("Aluno aprovado.\n");
   } else {
      printf("Aluno reprovado.\n");
   }
}

