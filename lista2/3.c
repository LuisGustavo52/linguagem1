#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
	int matriz[100][100], n, m, i,j, x,cont = 0;
	
	printf("Digite o tamanho da matriz:");
	scanf("%d %d",&n,&m);
	
	printf("Digite o valor X:");
	scanf("%d",&x);
	
	geraMatriz(matriz,n,m);
	
	printf("Matriz:\n");
	printMatriz(matriz,n,m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(matriz[i][j] == x){
			 	cont++;
			}
		}
	}
		
	printf("%d",cont);
	
	return 0;
}
