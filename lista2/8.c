#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

void somaMatriz(int a[][100], int b[][100], int c[][100], int linhas,int cols){
	int i,j;
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
		
	printf("Matriz A:\n");
	printMatriz(a,linhas, cols);
	
	printf("Matriz B:\n");
	printMatriz(b,linhas, cols);
		   
} 

void subtracaoMatriz(int a[][100], int b[][100], int c[][100], int linhas,int cols){
	int i,j;
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++){
			c[i][j] = b[i][j] + a[i][j];
		}
	
	printf("Matriz A:\n");
	printMatriz(a,linhas, cols);
	
	printf("Matriz B:\n");
	printMatriz(b,linhas, cols);
		   
} 

void constanteMatriz(int a[][100], int b[][100], int c[][100], int linhas,int cols){
	int i,j,constante;
	
	printf("Digite o valor constante:\n");
	scanf("%d",&constante);
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++){
			a[i][j] += constante;
			b[i][j] += constante;
		}
	
	printf("Matriz A:\n");
	printMatriz(a,linhas, cols);
	
	printf("Matriz B:\n");
	printMatriz(b,linhas, cols);
} 

int userOpcao(){
	int opcaoTraduzida;
	char opcao;
	
	printf("Escolha uma da oções abaixo:\na) Somar matrizes A e B\nb) Subtrair matriz B por matriz A\nc) Adicionar constantes as duas matrizes\nd) Mostrar matrizes\n");
	scanf(" %c", &opcao);
	
	if(opcao == 'a' || opcao == 'A'){
		opcaoTraduzida = 1;
	}else if(opcao == 'b' || opcao == 'B'){
		opcaoTraduzida = 2;
	}else if(opcao == 'c' || opcao == 'C'){
		opcaoTraduzida = 3;
	}else if(opcao == 'd' || opcao == 'D'){
		opcaoTraduzida = 4;
	}else{
		printf("Opcao incorreta, digite uma opcao de 'a' a 'b'\n");
		opcaoTraduzida = userOpcao();
	}
	return opcaoTraduzida;
}

int main(){
	int opcao, matrizA[100][100],matrizB[100][100], matrizC[100][100], l,c, i,j;
	
	printf("Digite o tamanho das duas matrizes:");
	scanf("%d %d",&l,&c);
	
	geraMatriz(matrizA,l, c);
	getch();
	geraMatriz(matrizB,l, c);
	
	opcao = userOpcao();
	switch (opcao){
	   case 1:
	   		somaMatriz(matrizA,matrizB,matrizC, l, c);
	   		
	   		printf("Matriz somada:\n");
	   		printMatriz(matrizC,l, c);
	   		
	   		break;
	
	   case 2:
	   		subtracaoMatriz(matrizA,matrizB,matrizC, l, c);
	   		printf("Matriz subtraida:\n");
	   		printMatriz(matrizC,l, c);
	   		
	   		break;
	   
	   case 3:
	     	constanteMatriz(matrizA,matrizB,matrizC, l, c);
	   		printf("Matrizes apos adicao de constante:\n");
	   		printMatriz(matrizA,l, c);
	   		printMatriz(matrizB,l, c);
	   		
	   		break;
	   
	   case 4:
	   		printf("Matriz A:\n");
			printMatriz(matrizA,l, c);
	
			printf("Matriz B:\n");
			printMatriz(matrizB,l, c);
	    	
	   		break;
	
	   default:
	    	break;

	}
	
	return 0;
	
}
