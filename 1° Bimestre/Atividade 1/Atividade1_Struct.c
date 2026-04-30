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

passo3:
Construir um procedimento para entrada dos dados e outro procedimento
para saída - Feito no 2° Passo

passo4:
Construir um procedimento para classificar o vetor (por nome). Fazer a
entrada, o processamento (ordenação) e saída. - Feito

passo5:
Construir um procedimento para classificar o vetor (por idade). Construir
menu contendo (entrada, ordenar por nome, ordenar por idade,
apresentar vetor, fim) - Feito

passo6:
Construir um procedimento para classificar o vetor (por fone). Adicionar ao
menu possibilidade de ordenar por fone também. - feito

passo7:
Otimizar código - feito

*/

#define total 5


typedef struct{
	char nome[20];
	char telefone[16]; // Mudança de 15 para 16
	short int idade;
} pessoa;

// -----------------------------------
pessoa pe[total];
short int i,j,opcao = 0;

// -----------------------------------

void entradaDados(){
	for(i=0;i<total;i++){
		printf("Pessoa %d\n",i+1);
		printf("Nome: ");
		fgets(pe[i].nome,sizeof(pe[i].nome),stdin);
		pe[i].nome[strcspn(pe[i].nome,"\n")] = '\0';
		
		printf("Telefone: ");
		fgets(pe[i].telefone,sizeof(pe[i].telefone),stdin);
		pe[i].telefone[strcspn(pe[i].telefone,"\n")] = '\0';
		
		printf("Idade: ");
		scanf("%d",&pe[i].idade);
		fflush(stdin);
		printf("-----------\n");
		
	}
}

void saidaDados(){
	printf("========================\n");
	printf("     Exibindo Dados     \n");
	printf("========================\n");
	printf("\n");
	printf("Id               Nome           Telefone     Idade\n");
	printf("-----------------------------------------------------\n");
	for(i=0;i<total;i++){
		
		printf("%2d",i+1);
		printf("%20s",pe[i].nome);
		printf("%18s",pe[i].telefone);
		printf("%9d\n",pe[i].idade);
	}
}

void troca(pessoa *p1, pessoa *p2){
	pessoa temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}



void classificaNome(){
	for(i=0;i<total-1;i++)
		for(j=i+1;j<total;j++)
			if(strcmp(pe[j].nome,pe[i].nome)== -1)
				troca(&pe[i],&pe[j]);
}

void classificaIdade(){
	for(i=0;i<total;i++)
		for(j=i+1;j<total-1;j++)
			if(pe[j].idade < pe[i].idade)
				troca(&pe[i],&pe[j]);
}

void classificaFone(){
	for(i=0;i<total;i++)
		for(j=i+1;j<total-1;j++)
			if(strcmp(pe[j].telefone,pe[i].telefone)== -1)
				troca(&pe[i],&pe[j]);
}

void inserirDados(){
	strcpy(pe[0].nome, "Victor");
	strcpy(pe[0].telefone, "(44) 99823-4512");
	pe[0].idade	= 20;
	
	strcpy(pe[1].nome, "Enzo");
	strcpy(pe[1].telefone, "(11) 97654-3321");
	pe[1].idade	= 17;
	
	strcpy(pe[2].nome, "Lucas");
	strcpy(pe[2].telefone, "(21) 98765-1098");
	pe[2].idade	= 31;
	
	strcpy(pe[3].nome, "Gabriel");
	strcpy(pe[3].telefone, "(31) 99211-7788");
	pe[3].idade	= 26;
	
	strcpy(pe[4].nome, "Rafael");
	strcpy(pe[4].telefone, "(41) 98123-6644");
	pe[4].idade	= 35;
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	do{
		printf("================\n");
		printf("      MENU      \n");
		printf("================\n");
		printf("1 - Inserir Dados\n");
		printf("2 - Exibir  Dados\n");
		printf("3 - Classificar Nome\n");
		printf("4 - Classificar Idade\n");
		printf("5 - Classificar Fone\n");
		printf("6 - Sair\n");
		printf("\n");
		printf("Opção: ");
		scanf("%d",&opcao);
		fflush(stdin);
		
		switch(opcao){
			case 1: entradaDados();    break;
			case 2: saidaDados();      break;
			case 3: classificaNome();  break;
			case 4: classificaIdade(); break;
			case 5: classificaFone();  break;
			case 6: return 0; 		   break;
			case 7: inserirDados();    break;
			default: 
				system("cls");
				printf("Opção inválida!\n"); 
				break;
		}
		
	}while(opcao!=6);

}
