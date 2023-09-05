#include <stdio.h>
	int main(){
		float s1, inss, ir, sl;
		printf("Digite o salario....: R$");
		scanf("%f",&s1);
		
		inss = s1;
		ir = s1;
		sl = s1 - inss + ir;
		
		if(inss <= 1247.70){
			inss = inss * 0.08;
		}
		if(inss >= 1247.71 && inss <= 2079.50){
			inss = inss * 0.09;
		}
		if(inss >= 2079.51 && inss <= 4159){
			inss = inss * 0.11;
		}
		if(inss > 4159){
			inss = 468;
		}
		if(ir <= 1710.78){
			ir = 0;
		}
		if(ir >= 1710.79 && ir <= 2563.6){
			ir = ir * 0.075;
		}
		if(ir >= 2563.62 && ir <= 3418.59){
			ir = ir * 0.15;
		}
		if(ir >= 3418.60 && ir <= 4271.59){
			ir = ir * 0.225;
		}
		else{
			ir = ir * 0.275;
		}
		
		printf("O salario bruto eh.....: R$%.2f o inss eh R$%.2f o IR eh R$%.2f e o salario liquido eh R$%.2f", s1, inss, ir, sl);
	}
