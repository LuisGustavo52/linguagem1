#include <stdio.h>
#include <stdlib.h>

void geraMatriz(int m[][100]){
	int i,j;

	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
		   m[i][j]=0;
}

int main(){
	int cont = 0, vetor[100][100],n,tam[2], x[2],y[2],result = 0,i,j,k;
	
	scanf("%d",&n);
	geraMatriz(vetor);	
	
	for(i=0; i<n; i++){
		scanf("%d %d %d %d",&x[0],&x[1],&y[0],&y[1]);
		tam[0] = (x[1] - x[0]) + 1;
		tam[1] = (y[1] - y[0]) + 1;
		printf("tamanhos: %d %d",tam[0], tam[1]);
		
		for(j=x[0]; j<(tam[0] + x[0]);j++){
			for(k=y[0]; k<(tam[1] + y[0]);k++){
				printf("alberto%d %d\n",j,k);
				if(vetor[j][k] != 1){
					printf("fabio\n");
					vetor[j][k] = 1;
					result++;
				}
			}
		}
	}
		
		for(i=0; i<100; i++){
			for(j=x[0]; j<100;j++){
				if(vetor[i][j] == 1){
					cont++;
				}
			}						
	}
	printf("%d\n",cont);
	printf("%d",result);
}
