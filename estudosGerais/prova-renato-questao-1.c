#include <stdio.h>
#include <string.h>
#include "registroUtils.h"


int main (void) {
	FILE *arquivo, *arquivo2;
	int qtdLinha = 0;
	long tamanho = 0;
	Registro registro;
	arquivo = fopen(NOME_ARQUIVO, "r");

	if (arquivo == NULL){
		fprintf(stderr, "Falha ao carregar arquivo!\n");
		return 1;
	}

	arquivo2 = fopen("arq2.dat", "w");
	fseek(arquivo, 0, SEEK_END);
	tamanho = ftell(arquivo);
	qtdLinha = tamanho/100;

	for (int i = 1; i <= qtdLinha; i++)
	{
		fseek(arquivo, 0, SEEK_SET);
		//fread(&registro, sizeof(Registro), 1, arquivo);
		fread(&registro, sizeof(Registro), 1, arquivo);
		printf("%.8s%.40s%.40s%.12s\n", registro.chave, registro.nome, registro.email, registro.telefone);		
		return 0;
		//fprintf(arquivo2, "%.8s%.40s%.40s%.12s", registro.chave, registro.nome, registro.email, registro.telefone);		
	}

	fclose(arquivo);
	fclose(arquivo2);
	return 0;
}