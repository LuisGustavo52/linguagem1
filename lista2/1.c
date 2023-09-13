#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[100][100], tamanhoL, tamanhoC, i,j, maior = 0;
	
	printf("Digite o tamanho da matriz:");
	scanf("%d%d",&tamanhoL,&tamanhoC);
	
	for(i=0; i<tamanhoL;i++){
		for(j=0; j<tamanhoC;j++){
			scanf("%d\n0",&matriz[i][j]);
		}
	}
	
	
	for(i=0; i<tamanhoL;i++){
		for(j=0; j<tamanhoC;j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	printf("O maior valor e: %d",maior);
	
}
