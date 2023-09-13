#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[100][100], tamanhoL, tamanhoC, i,j, menor;
	
	printf("Digite o tamanho da matriz:");
	scanf("%d %d",&tamanhoL,&tamanhoC);
	printf("roberto");
	for(i=0; i<tamanhoL;i++){
		for(j=0; j<tamanhoC;j++){
			printf("alberto");
			scanf("%d",&matriz[i][j]);
			
		}
	}
	
	
	for(i=0; i<tamanhoL;i++){
		for(j=0; j<tamanhoC;j++){
			if(i==0 && j==0){
				menor = matriz[i][j];
			}else{
				if(matriz[i][j] < menor){
				menor = matriz[i][j];
				}
			}
		}
			
	}
	
	printf("O menor valor e: %d",menor);
	
	return 0;
	
}
