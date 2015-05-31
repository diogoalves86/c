#include <stdio.h>
#include <stdlib.h>
//Comentário de uma linha
/*
* Comentário de mais de uma linha
*/

typedef struct 
{
	char *nome;
	int idade;
	char *turma;
} aluno;


void mensagem();
void retornaAluno(aluno structAluno);

int main()
{
	char valor[] = "Ds";
	char valor2[] = "Ds";
	printf("%i\n", &valor);
	printf("%i\n", &valor2);
}

void mensagem()
{
	for(int i = 0; i < 4; i++)
		printf("O vmensagemr de i é %i \n", i);
}

void retornaAluno(aluno structAluno)
{
	printf("O nome do aluno é: %s\n", structAluno.nome);
	printf("A idade do aluno é: %d\n", structAluno.idade);
	printf("A turma do aluno é: %s\n", structAluno.turma);
}