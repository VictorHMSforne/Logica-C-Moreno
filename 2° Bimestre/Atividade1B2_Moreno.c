#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercícios do Moreno:
	...
	4- Empilhar 5 valores aleatórios(Gerar 5 valores e empilhá-los)
	5- Empilhar 5 valores aleatórios sem repetição
				(Gerar 5 valores ñ repetidos e empilhá-los) - Minha ideia
	6- Mostrar maior elemento e posição
	7- Usar alguns métodos de ordenação - Tentar o Selection primeiro
	8 - Esvaziar pilha
	
*/


void push(int item); //empilhar
void pop();			//desempilhar
void imprimir();
int entrada_dados();
void aleatorio5();
void aleatorio5NRepetido();

typedef struct apelido_no{
	int dado;
	struct apelido_no *proximo;	
}no;

no *top=NULL;

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int n, opcao;
	do{
		system("cls");
		printf("\n\nMenu");
		printf("\n1- Empilhar");
		printf("\n2- Desempilhar");
		printf("\n3- Imprimir");
		printf("\n4 - Gerar 5 números aleatórios e empilhá-los");
		printf("\n5 - Gerar 5 números aleatórios(Ñ Repetidos) e empilhá-los");
		printf("\n8 - Sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1: n=entrada_dados(); push(n) /*empilhar*/; break;
			case 2: pop(); break/*desempilhar*/;
			case 3: imprimir(); break;
			case 4: aleatorio5(); break;
			case 5: aleatorio5NRepetido(); break;
		}
	}while(opcao!=8);
	system("pause");
	return 0;
}

void push(int item){
	printf("----------------\n");
	printf(" EMPILHANDO  \n");
	printf("--------------\n");
	
	no *novo=malloc(sizeof(no));
	//Necessário verificar se há memória -> Tentar em casa dps
	novo->dado=item;
	novo->proximo=top;
	top=novo;
	printf("\nValor %d empilhado\n",novo->dado);
	system("pause");
}
//-----------------------------------------------------
void pop(){
	printf("------------------\n");
	printf(" DESEMPILHANDO  \n");
	printf("------------------\n");
	if(top==NULL)
		printf("A pilha está vazia\n");
	else{
		no *temp;
		temp=top;
		top=top->proximo;
		printf("\n%d Desempilhado com sucesso\n", temp->dado);
		free(temp);
	}
	system("pause");
}
//-----------------------------------------------------
void imprimir(){
	no *temp;
	temp=top;
	printf("-------------------------\n");
	printf("    IMPRIMINDO PILHA\n");
	printf("-------------------------\n");
	while(temp!=NULL){
		printf("%d\n", temp->dado);
		temp=temp->proximo;
	}
	system("pause");
}
//-----------------------------------------------------
int entrada_dados(){
	int valor;
	printf("\nEntre com valor a empilhar: ");
	scanf("%d",&valor);
	return valor;
}
//-----------------------------------------------------
void aleatorio5(){
	int i, numAleatorio=0;
	
	for(i=0;i<5;i++){
		do{
			
		}while(numAleatorio==vet[i])
		numAleatorio = rand()%91+10;
		push(numAleatorio);
	}
	
	
}
//-----------------------------------------------------
void aleatorio5NRepetido(){
	int i,j, numAleatorio=0;
	int vet[5];
	
	for(i=0;i<5;i++){
		numAleatorio = rand()%91+10;
		for(j=0;j<i;j++){
			if(numAleatorio==vet[j]){
				
			}
		}
		vet[i]= numAleatorio;
		push(numAleatorio);
	}
}
