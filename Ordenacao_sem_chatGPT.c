#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int tam = 0;
	int i,j;
	
	printf("Digite a quantidade de números que deseja organizar:_ ");
	scanf("%d",&tam);
	
	int vetor[tam];
	
	for(i=0;i<tam;i++){
		printf("\nDigite o (%d) Número ",i);
		scanf("%d",&vetor[i]);
		fflush(stdin);
	}
		printf("%d%d%d\n",vetor[0],vetor[1],vetor[2]);
}
