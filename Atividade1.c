#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
passo1:
Criar struct contendo nome, idade e telefone e fazer a inserção do dado, apresentando os dados no final (para conferencia)  - X

passo2:
Converter strutura para um vetor de 5 elementos. Fazer a entrada dos dados e apresentar no final - X

passo3:
Construir um procedimento para entrada dos dados e  outro procedimento para saída

passo4:
Construir  um procedimento para classificar o vetor (por nome). Fazer a entrada, o processamento (ordenação) e saída.

passo5:
Construir um procedimento para classificar o vetor (por idade). Construir menu contendo (entrada, ordenar por nome, ordenar por idade, apresentar vetor, fim)

passo6:
Construir um procedimento para classificar o vetor (por fone). Adicionar ao menu possibilidade de ordenar por fone também.

passo7:
Otimizar código*/

typedef struct {
	char nome[30];
	int  idade;
	char telefone[16];
} pessoa;

pessoa p[4]; // é Realizado a Instância da struct


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	for(i=0;i<=4;i++){
		printf("Digite o nome %dª da pessoa:\n", i+1);
		fgets(p[i].nome,sizeof(p[i].nome),stdin);
		p[i].nome[strcspn(p[i].nome,"\n")] = '\0';
		
		printf("Digite a idade dessa pessoa:\n");
		scanf("%d",&p[i].idade);
		fflush(stdin);
		
		printf("Digite o telefone dessa pessoa:\n");
		fgets(p[i].telefone,sizeof(p[i].telefone),stdin);
		printf("------------------------------------\n");
		printf("\n");
	}
	
	
	
	printf("--------------------------\n");
	printf("     EXIBINDO EM TELA:    \n");
	printf("--------------------------\n");
	for(i=0;i<=4;i++){
		printf("Nome:     %s\n",p[i].nome);
		printf("Idade:    %d\n",p[i].idade);
		printf("Telefone: %s",p[i].telefone);
	}
	
	
}
