#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

void printMatrizDp(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(i == j){
				printf("%3d |",m[i][j]);
			}else{
				printf("    |");
			}	
		}
		printf("\n");
	}
	printf("\n");
}


int main(){
	int matriz[100][100], n, m, i,j;
	
	printf("Digite o tamanho da matriz:");
	scanf("%d %d",&n,&m);
	
	geraMatriz(matriz,n,m);
	
	printf("Matriz:\n");
	printMatriz(matriz,n,m);
	
	printf("Diagonal Principal:\n");
	printMatrizDp(matriz,n,m);
	
	
	return 0;
}

