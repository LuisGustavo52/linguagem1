#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"


void multiplicacaoMatriz(int a[][100], int b[][100], int c[][100], int linhas[],int cols[]){
	int i,j,k,l, elementos[100],soma = 0;
	
	for(i=0; i<cols[0]; i++){
		elementos[i] = 0;
	}
	for(i=0;i<linhas[0];i++){
		for(j=0;j<cols[1];j++){
			soma = 0;
			for(k=0; k<cols[0]; k++){
				elementos[k] = a[i][k] * b[k][j];
			}	
			for(l=0; l<cols[0]; l++){
				soma += elementos[l];
			
			}
			c[i][j] = soma;
		}
	}
		
		   
} 

int main(){
	int matrizA[100][100],matrizB[100][100], matrizC[100][100], linhas[3], colunas[3], i,j;

	printf("Digite o tamanho da matriz A:");
	scanf("%d %d",&linhas[0],&colunas[0]);
	
	printf("Digite o tamanho da matriz B:");
	scanf("%d %d",&linhas[1],&colunas[1]);
	
	if(linhas[0] != colunas[1]){
		printf("Digite matrizes de ordens válidas!\n");
		main();
	}
	
	linhas[3] = linhas[0];
	colunas[3] = colunas[1];
	
	printf("Digite os dados da matriz A:");
	leiaMatriz(matrizA,linhas[0], colunas[0]);
	printMatriz(matrizA,linhas[0], colunas[0]);
	
	printf("Digite os dados da matriz B:");
	leiaMatriz(matrizB,linhas[1], colunas[1]);
	printMatriz(matrizB,linhas[1], colunas[1]);
	
	multiplicacaoMatriz(matrizA, matrizB, matrizC, linhas, colunas);
	printf("Matriz produto:\n");
	printMatriz(matrizC,linhas[3], colunas[3]);
		
	return 0;
}
