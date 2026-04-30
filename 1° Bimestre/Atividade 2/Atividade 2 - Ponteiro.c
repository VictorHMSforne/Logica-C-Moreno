#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int  x  = 10;
	int  y  = 20;
	int  z  = 100;
	int  N  = 24;
	char tc = 'c';
	
	int *pt_x = &x;
	int *pt_y = &y;
	int *pt_z = &z;
	int *pt_N = &N;
	char *pt_tc = &tc;
	
	
	
	printf("valor x  = %d\n",x);
	printf("valor y  = %d\n",y);
	printf("valor z  = %d\n",z);
	printf("valor N  = %d\n",N);
	printf("valor tc = %c\n",tc);
	printf("-------------------------------\n");
	printf("End. Mem. x  = %p\n",&x);
	printf("End. Mem. y  = %p\n",&y);
	printf("End. Mem. z  = %p\n",&z);
	printf("End. Mem. N  = %p\n",&N);
	printf("End. Mem. tc = %p\n",&tc);
	printf("-------------------------------\n");
	printf("End. Mem. pt_x  = %p\n",&pt_x);
	printf("End. Mem. pt_y  = %p\n",&pt_y);
	printf("End. Mem. pt_z  = %p\n",&pt_z);
	printf("End. Mem. pt_N  = %p\n",&pt_N);
	printf("End. Mem. pt_tc = %p\n",&pt_tc);
	printf("-------------------------------\n");
	printf("Valor pt_x  = %p\n", pt_x);
	printf("Valor pt_y  = %p\n", pt_y);
	printf("Valor pt_z  = %p\n", pt_z);
	printf("Valor pt_N  = %p\n", pt_N);
	printf("Valor pt_tc = %p\n", pt_tc);
	printf("-------------------------------\n");
	printf("Vlr. onde pt_x aponta  = %d\n",*pt_x);
	printf("Vlr. onde pt_y aponta  = %d\n",*pt_y);
	printf("Vlr. onde pt_z aponta  = %d\n",*pt_z);
	printf("Vlr. onde pt_N aponta  = %d\n",*pt_N);
	printf("Vlr. onde pt_tc aponta = %c\n",*pt_tc);
	printf("-------------------------------\n");
	printf("End. Mem. onde pt_x  aponta = %p\n",&*pt_x);
	printf("End. Mem. onde pt_y  aponta = %p\n",&*pt_y);
	printf("End. Mem. onde pt_z  aponta = %p\n",&*pt_z);
	printf("End. Mem. onde pt_N  aponta = %p\n",&*pt_N);
	printf("End. Mem. onde pt_tc aponta = %p\n",&*pt_tc);
	
	//plus do professor
	
	char nome[40];
	int i;
	printf("Digite o nome: ");
    scanf("%[^\n]",nome); // Mesma coisa do Fgets (- seguro obviamente)
    printf("End. de nome: %p\n",&nome);
    for (i = 0; i<strlen(nome); i++)
      printf("End. caractere %c: %p\n",nome[i],&nome[i]);
	
}
