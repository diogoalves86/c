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