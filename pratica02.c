//Questão 8 simulado
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pop(int *topo );
void min(int *pilha,int topo);

int main(){

	int acao;
	printf("Escreva quantas ações o Papai Noel fará:\n");
	scanf("%d",&acao);

	int *sacopapainoel = (int *) malloc(acao*sizeof(int));
	//usado para declarar que o tamanho do sacopapainoel é um vetor de 
	//inteiros e o malloc armazena o tamanho desse array de inteiro
	//o int final confirma que deve ser um tamanho INTEIRO
	
	int topo = -1;
	//NULL só usa quando é ponteiro!

    char tamanhostring[10];
	int valor;
	
	for(int i=0;i<acao;i++){
		scanf("%s", tamanhostring);

		if(strcmp(tamanhostring, "PUSH")==0||
		   strcmp(tamanhostring, "Push")==0||
		   strcmp(tamanhostring, "push")==0){
				scanf("%d", &valor);
				sacopapainoel[++topo]= valor;
		   }

		if(strcmp(tamanhostring, "POP")==0||
		   strcmp(tamanhostring, "Pop")==0||
		   strcmp(tamanhostring, "pop")==0){
		   pop(&topo);
		   }

		if(strcmp(tamanhostring, "Min")==0||
		   strcmp(tamanhostring, "MIN")==0||
		   strcmp(tamanhostring, "min")==0){
		   min(sacopapainoel,topo);
		   }
	}
	free(sacopapainoel);
	return 0;
}

void pop(int *topo ){
	if(*topo==-1){
		printf("EMPTY\n");
	}else{
		//printf("Retirando %d\n", pilha[*topo]);
		(*topo)--;
	}
}

void min(int *pilha,int topo){
	if(topo==-1){
		printf("EMPTY\n");
	}else{
		int min = pilha[0];
		for(int i=1; i<=topo; i++){
			if(pilha[i]<min){
				min=pilha[i];
			}
		}
		printf("Menor valor %d\n", pilha[topo]);
	}
}

