#include <stdio.h>
#include <stdlib.h>


void geraMatriz(int m[500][500]){
	int i,j;

	for(i=0;i<500;i++)
		for(j=0;j<500;j++)
		   m[i][j]=0;
}

int main(){
	int vetor[500][500],n,result = 0,x,y,i,j,k;
	
	scanf("%d",&n);
	geraMatriz(vetor);
	
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		if(vetor[x][y] == 0){
			vetor[x][y] = 1;
		}else{
			result = 1;
		}		
	}
	printf("%d",result);
	
}
