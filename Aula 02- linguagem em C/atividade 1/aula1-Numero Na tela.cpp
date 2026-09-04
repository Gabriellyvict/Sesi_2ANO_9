	//inserindo biblioteca
#include <stdio.h>

	//iniciando o código C
int main() {
	
		//defininindo que x é uma variavel de Numero inteiro
	int x;
		//mostra na tela o texto
	printf("digite um numero: ");
		//abre uma caixinha para poder escrever. o & serva para dizer qua a informação escrita (%d (variavel tipo inteiro)), sera armazenado em X.
	scanf("%d", &x);
	
		//mostrando informações na tela com printf
	printf("valor de x: %d", x);
	
		//retornando 0 erros caso esteja rudo ok
	return 0;
}