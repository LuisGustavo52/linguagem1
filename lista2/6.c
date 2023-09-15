#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

void somaMatriz(int a[][100], int b[][100], int c[][100], int linhas,int cols){
	int i,j;
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
		   
} 

int main(){
	int matrizA[100][100],matrizB[100][100], matrizC[100][100], l[2], c[2], i,j;
	
	printf("Digite o tamanho da matriz A:");
	scanf("%d %d",&l[0],&c[0]);
	
	printf("Digite o tamanho da matriz B:");
	scanf("%d %d",&l[1],&c[1]);
	
	if(l[0] == l[1] && c[0] == c[1]){
		geraMatriz(matrizA,l[0], c[0]);
		getch();
		geraMatriz(matrizB,l[0], c[0]);
		
		printf("Matriz A:\n");
		printMatriz(matrizA,l[0], c[0]);
	
		printf("Matriz B:\n");
		printMatriz(matrizB,l[0], c[0]);
		
		somaMatriz(matrizA,matrizB,matrizC, l[0], c[0]);
		printf("Soma das matrizes:\n");
		printMatriz(matrizC,l[0], c[0]);
		
	
	}else{
		printf("As matrizes precisam ter a mesma ordem!\n");
		main();
	}
	
	return 0;
}

