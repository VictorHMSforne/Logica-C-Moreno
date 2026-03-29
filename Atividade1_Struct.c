#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
passo1:
Criar struct contendo nome, idade e telefone e fazer a inserção do dado,
apresentando os dados no final (para conferencia) - Feito 

passo2:
Converter estrutura para um vetor de 5 elementos. Fazer a entrada dos
dados e apresentar no final - Feito
*/

typedef struct{
	char nome[16];
	char telefone[16];
	int idade;	
} pessoa;

pessoa p[5];
int i;

void entradaDados(){
	for(i=0;i<5;i++){
		printf("Digite o nome da %dª pessoa: \n",i+1);
		fgets(p[i].nome,sizeof(p[i].nome),stdin);
		p[i].nome[strcspn(p[i].nome,"\n")] = '\0';
		
		printf("Digite o telefone da %dª pessoa: \n",i+1);
		fgets(p[i].telefone,sizeof(p[i].telefone),stdin);
		p[i].telefone[strcspn(p[i].telefone,"\n")] = '\0';
		
		printf("Digite a idade da %dª pessoa: \n",i+1);
		scanf("%d", &p[i].idade);
		fflush(stdin);
		
		printf("\n");
		printf("------------------------------\n");
		printf("\n");
	}
	
}

void saidaDados(){
	for(i=0;i<5;i++){
		printf("\n");
		printf("=====================\n");
		printf("   EXIBINDO EM TELA   \n");
		printf("=====================\n");
		
		printf("%dª Pessoa\n",i+1);
		printf("Nome: %s\n", p[i].nome);
		printf("Telefone: %s\n", p[i].telefone);
		printf("Idade: %d\n", p[i].idade);
		printf("------------------------\n");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	entradaDados();
	saidaDados();
	
}
