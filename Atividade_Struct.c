#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <locale.h>

/*typedef struct {
	int idade;
	int qtd_filhos;
	char nome[16];
}registro1;*/

typedef struct {
	float idade;
	char turno;
	char nome[32];
}registro2;

typedef struct {
	char turno;
	char nome[32];
	float idade;
}registro2_2;

typedef struct {
	char turno;
	float idade;
	char nome[32];
}registro2_3;

int main(){
		setlocale(LC_ALL,"Portuguese");
	
	
		/*printf("Tamanho do int em bits:  %d\n", sizeof(int));
		printf("Tamanho do char em bits: %d\n", sizeof(char));
		printf("---------------------------\n");
		printf("\n");
		printf("\n");
		printf("Tamanho da Struct: %d\n", sizeof(registro1));
		printf("Idade Inicia em:   %d\n", offsetof(registro1,idade));
		printf("Quantidade de Filhos começa em: %d\n", offsetof(registro1,qtd_filhos));
		printf("Nome começa em: %d\n", offsetof(registro1,nome));*/
		
		printf("Tamanho do float: %d\n", sizeof(float));
		printf("\n");
		printf("\n");
		
		printf("Tamanho da Struct: %d\n", sizeof(registro2));
		printf("Idade Inicia em:   %d\n", offsetof(registro2,idade));
		printf("Turno Inicia em: %d\n", offsetof(registro2,turno));
		printf("Nome começa em: %d\n", offsetof(registro2,nome));
		
		
		
		
		
		
		
}
