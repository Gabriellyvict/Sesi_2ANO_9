	//inserindo biblioteca
#include <stdio.h>

	//iniciando o código C
int main() {
	float peso, altura, imc;
	
	printf("digite em KG: ");
	scanf("%f", &peso);
	
	printf("digite sua altura em metros: ");
	scanf("%f", &altura);
	
	imc= peso / (altura*altura);
	
	printf("\nSeu IMC é: %.2f\n", imc);
	
	
		//retornando 0 erros caso esteja rudo ok
	return 0;
}