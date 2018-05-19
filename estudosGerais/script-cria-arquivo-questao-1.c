#include <stdio.h>
#include <string.h>
#include "registroUtils.h"

int main (void){
	FILE *arquivo = fopen("arq.dat", "w");
	Registro registro;

	for (int i = 0; i < 100; i++)
	{
		sprintf(registro.chave, "chav%.2d", i);
		sprintf(registro.nome, "esteeumnomelegal%.2d", i);
		sprintf(registro.email, "esteeumemailegal%.2d", i);
		sprintf(registro.telefone, "tel%.2d", i);
		printf("%.8s\n", registro.chave);
		printf("%.40s\n", registro.nome);
		printf("%.40s\n", registro.email);
		printf("%.12s\n", registro.telefone);
		fprintf(arquivo, "%.8s%.40s%.40s%.12s\n", registro.chave, registro.nome, registro.email, registro.telefone);
		printf("Registro inserido com sucesso! :D\n");
	}
	printf("Arquivo criado com sucesso!\n");
	
	printf("Tamanho do arquivo: %ld\n", getTamanhoArquivo(arquivo));

	fclose(arquivo);
}