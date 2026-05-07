/*
Construir um programa em linguagem C que implemente uma pilha.
A estrutura dos dados será composta por duas structs
1) dados (nome, nota1, nota2, sub)
2) no (dados, *proximo)

O programa deverá contemplar as opções abaixo do menu:
- empilhar
- desempilhar
- imprimir (todos os dados)
- inverter pilha
- sairq*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
	char nome[50];
	float nota1, nota2, sub;
}dados;

typedef struct apelido{
	dados da;
	struct apelido *proximo;
}no;

dados entradaDados();
void push(dados);
void pop();
void imprimir();

//--------------------------------------


no *top=NULL;

int main(){
	short int opcao;
	dados n;
	do{
		system("cls");
		printf("MENU\n");
		printf("\n");
		printf("1 - Empilhar\n");
		printf("2 - Desempilhar\n");
		printf("3 - Imprimir (Todos os Dados)\n");
		printf("4 - Inverter pilha\n");
		printf("5 - Sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				n = entradaDados();
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				imprimir();
				break;
			case 4:
				//Inverter Pilha
				break;
		}
	}while(opcao!=5);
	
	
}
//------------------------------
dados entradaDados(){
	dados dat;
	
	system("cls");
	/*
	printf("Nome:");
	fgets(dat.nome,sizeof(dat.nome),stdin);
	dat.nome[strcspn(dat.nome,"\n")]='\0'
	printf("Nome:");
	fgets(dat.nome,sizeof(dat.nome),stdin);*/
	fflush(stdin);
	printf("Nome  : ");scanf("%s",&dat.nome);fflush(stdin);
	printf("Nota 1: ");scanf("%f",&dat.nota1);fflush(stdin);
	printf("Nota 2: ");scanf("%f",&dat.nota2);fflush(stdin);
	printf("Sub   : ");scanf("%f",&dat.sub);fflush(stdin);
	
	return dat; //É necessário retornar, pois é uma função com a tipagem `dados`
}
//------------------------------
void push(dados cu){
	//1° Alocar memória
	no *novo=malloc(sizeof(no));
	//2° Verificar se há memória
	//3° Preencher dados
	novo->da=cu;// Aqui está os dados nome e etc...
	novo->proximo=top;
	top=novo;
}
//------------------------------
void pop(){
	
	// Verificar se está NULL
	if(top!=NULL){
		no *temp=top;
		top=top->proximo;
		free(temp);
		printf("Desempilhado com Sucesso!");
		system("pause");
	}
		
	
}

//------------------------------
void imprimir(){
	no *temp;
	temp=top;
	while(temp!=NULL){
		printf("%s %5.1f %5.1f %5.1f\n",
		temp->da.nome,
		temp->da.nota1,
		temp->da.nota2,
		temp->da.sub);
		temp=temp->proximo;
	}
	system("pause");
}
