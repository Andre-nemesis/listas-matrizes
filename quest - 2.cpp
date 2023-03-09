#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void mult(int arm[][2],int a[][2],int b[][2],int area) {
	for(int i = 0;i < area;i++){
		for(int j = 0; j < area;j++) {
			arm[i][j] = 0;	
			for(int p = 0;p < c;p++) arm[i][j] += a[i][p] * b[p][j]; 	
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int matriz_a[l][c] = {{1,2},{3,4}};
	int matriz_b[l][c] = {{5,6},{7,8}};
	int result[l][c],i,j;
	
	mult(result,matriz_a,matriz_b,2);
	
	printf("Matriz A:\n");
	for(i = 0;i < l;i++) {
		for(j = 0; j < c;j++) printf("%d ",matriz_a[i][j]);
		printf("\n");
	}
	printf("\n");
	
	printf("Matriz B:\n");
	for(i = 0;i < l;i++) {
		for(j = 0; j < c;j++) printf("%d ",matriz_b[i][j]);
		printf("\n");
	} 
	printf("\n");
	printf("Resultado da Multiplicação da Matriz A com a Matriz B é:\n");
	
	for(i = 0;i < l;i++) {
		for(j = 0; j < c;j++) printf("%d\t",result[i][j]);
		printf("\n");
	}
	
	return 0;	
}
