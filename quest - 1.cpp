#include <stdio.h>
#include <locale.h>
#define l 3
#define c 3

void transp(int a[][3],int b[][3],int area){
	for(int i = 0;i < area;i++) for(int j = 0;j < area;j++) b[i][j] = a[j][i];
}

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int matriz_a[l][c] = {{1,2,3},{4,5,6},{7,8,9}};
	int matriz_b[l][c];
	
	transp(matriz_a,matriz_b,3);
	
	printf("Matriz A:\n");
	for(int i = 0;i < l;i++) {
		for(int j = 0;j < c;j++) printf("%d ",matriz_a[i][j]);
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz Transposta da Matriz A:\n");
	for(int i = 0;i < l;i++) {
		for(int j = 0;j < c;j++) printf("%d ",matriz_b[i][j]);
		printf("\n");
	}
	
	return 0;
}
