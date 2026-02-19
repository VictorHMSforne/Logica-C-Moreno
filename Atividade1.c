#include <stdio.h>
#include <stdlib.h>

/*passo1:
Criar struct contendo nome, idade e telefone e fazer a inserção do dado, apresentando os dados no final (para conferencia)

passo2:
Converter strutura para um vetor de 5 elementos. Fazer a entrada dos dados e apresentar no final

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

pessoa p; // é Realizado a Instância da struct


int main(){
	printf("Digite o nome da pessoa:\n");
	fgets(p.nome,sizeof(p.nome),stdin);
	
	printf("Digite a idade dessa pessoa:\n");
	scanf("%d",&p.idade);
	fflush(stdin);
	
	printf("Digite o telefone dessa pessoa:\n");
	fgets(p.telefone,sizeof(p.telefone),stdin);
	
	printf("--------------------------\n");
	printf("     EXIBINDO EM TELA:    \n");
	printf("--------------------------\n");
	
	printf("Nome:      %s",p.nome);
	printf("Idade:     %d\n",p.idade);
	printf("Telefone:  %s",p.telefone);
	
}
