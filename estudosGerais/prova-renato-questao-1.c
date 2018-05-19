#include <stdio.h>
#include "registroUtils.h"


int main (void) {
	FILE *arquivo, *arquivo2;
	int qtdLinha = 0;
	long tamanho = 0;
	Registro registro;
	arquivo = fopen("arq.dat", "r");
	arquivo2 = fopen("arq2.dat", "w");
	fseek(arquivo, 0, SEEK_END);
	tamanho = ftell(arquivo);
	qtdLinha = tamanho/100;

	for (int i = 1; i <= qtdLinha; i++)
	{
		fseek(arquivo, i*sizeof(Registro), SEEK_END);
		fread(&registro, sizeof(Registro), 1, arquivo);
		fprintf(arquivo2, "%.8s%.40s%.40s%.12s\n", registro.chave, registro.nome, registro.email, registro.telefone);		
	}

	fclose(arquivo);
	fclose(arquivo2);
	return 0;
}