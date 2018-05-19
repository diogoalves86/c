#include <stdio.h>
#include <string.h>
#include "registroUtils.h"

int main (void){
	FILE *arquivo = fopen("arq.dat", "w");
	Registro registro;

	for (int i = 0; i < 100; i++)
	{
		formataDados(&registro, i);
		exibeDados(&registro);
		insereNoArquivo(arquivo, &registro);
		printf("Registro inserido com sucesso! :D\n");
	}
	printf("Arquivo criado com sucesso!\n");
	
	printf("Tamanho do arquivo: %ld\n", getTamanhoArquivo(arquivo));

	fclose(arquivo);
}