	//inserindo biblioteca
#include <stdio.h>

	//iniciando o código C
int main() {
	
		//defininindo que idade é 16 e numero inteiro. float numero quebrado. char uma unica letra/digito
	int idade=16;
	float altura=1.63;
	char letra='G';
	
	
		//%d pois é N inteiro.
	printf("idade:%d\n", idade);
		//%. pois é N quebrado. o 2f determina que após a virgula, vai aparecer apenas dois N. escrevi: 1,543. aparece:1,54
	printf("Altura: %.2f\n", altura);
		//%c pois é apenas uma letra. o \n é para pular linha.
	printf("letra: %c\n", letra);
	
		//retornando 0 erros caso esteja rudo ok
	return 0;
}