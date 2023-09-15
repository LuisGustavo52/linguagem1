#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

void printMatrizDs(int m[][100],int linhas,int cols){
	int i,j, gambiarraJ = cols -1, gambiarraI = 0;

	for(i=0;i<linhas;i++){
		for(j= (cols-1); j >= 0; j--){
			if(j == gambiarraJ && i == gambiarraI){
				printf("%3d |",m[i][j]);
				gambiarraJ--;
				gambiarraI++;
			}	
		}
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
	
	printf("Diagonal Secundaria:\n");
	printMatrizDs(matriz,n,m);
	
	
	return 0;
}

