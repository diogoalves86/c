#include <stdio.h>

struct _Registro{
	char chave[8];
	char nome[40];
	char email[40];
	char telefone[12];
};
typedef struct _Registro Registro;

long getTamanhoArquivo (FILE *arquivo){
	fseek(arquivo, 0, SEEK_END);
	return ftell(arquivo);
}

void exibeDados(Registro *registro){
	printf("%.8s\n", registro->chave);
	printf("%.40s\n", registro->nome);
	printf("%.40s\n", registro->email);
	printf("%.12s\n", registro->telefone);
}

void formataDados(Registro *registro, int contador){
	sprintf(registro->chave, "chav%.2d", contador);
	sprintf(registro->nome, "esteeumnomelegal%.2d", contador);
	sprintf(registro->email, "esteeumemailegal%.2d", contador);
	sprintf(registro->telefone, "tel%.2d", contador);
}

void insereNoArquivo(FILE *arquivo, Registro *registro){
	
	fprintf(arquivo, "%.8s%.40s%.40s%.12s\n", registro->chave, registro->nome, registro->email, registro->telefone);
}