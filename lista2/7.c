#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"


void multiplicacaoMatriz(int a[][100], int b[][100], int c[][100], int linhas,int cols){
	int i,j,k,l, elementos[100],soma = 0;
	
	for(i=0; i<linhas; i++){
		elementos[i] = 0;
	}
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			soma = 0;
			for(k=0; k<linhas; k++){
				elementos[k] = a[i][k] * b[k][j];
			}	
			for(l=0; l<linhas; l++){
				soma += elementos[l];
			
			}
			c[i][j] = soma;
		}
	}
		
		   
} 

void geraMatrizEscalar(int m[][100], int linhas,int cols){
	int i,j,valor;
		
	srand(time(NULL));
	valor = rand()%50;
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++){
			if(i==j){
				m[i][j] = valor;
			}else{
				m[i][j] = 0;
			}
		}
		   
		   
} 


int main(){
	int matrizA[100][100],matrizEscalar[100][100], matrizC[100][100], linhas, colunas, i,j;

	printf("Digite o tamanho da matriz:");
	scanf("%d %d",&linhas,&colunas);
	
	geraMatriz(matrizA,linhas, colunas);
	getch();
	geraMatrizEscalar(matrizEscalar,linhas, colunas);
		
	printf("Matriz gerada:\n");
	printMatriz(matrizA,linhas, colunas);
	
	printf("Matriz escalar gerada:\n");
	printMatriz(matrizEscalar,linhas, colunas);
	
	multiplicacaoMatriz(matrizA, matrizEscalar, matrizC, linhas, colunas);
	printf("Matriz produto:\n");
	printMatriz(matrizC,linhas, colunas);
		
	return 0;
}

