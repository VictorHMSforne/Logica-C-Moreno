#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
passo1:
Criar struct contendo nome, idade e telefone e fazer a inserção do dado,
apresentando os dados no final (para conferencia) - Feito 
*/

typedef struct{
	char nome[16];
	char telefone[16];
	int idade;	
} pessoa;

pessoa p;

int main(){
	printf("Digite o nome de uma pessoa: \n");
	fgets(p.nome,sizeof(p.nome),stdin);
	printf("Digite o telefone dessa  pessoa: \n");
	fgets(p.telefone,sizeof(p.telefone),stdin);
	printf("Digite a idade dessa  pessoa: \n");
	scanf("%d", &p.idade);
	fflush(stdin);
	
	printf("\n");
	printf("=====================\n");
	printf("   EXIBINDO EM TELA   \n");
	printf("=====================\n");
	
	printf("Nome: %s\n", p.nome);
	printf("Telefone: %s\n", p.telefone);
	printf("Idade: %d\n", p.idade);
	
}
