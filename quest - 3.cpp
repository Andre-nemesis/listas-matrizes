#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void inverter(int a[][2],int arm[][2],int area) {
	int aux;
	for(int i = 0;i < l;i++) {
		for(int j = 0;j < c;j++) {
			aux = a[0][0];
			if(i == 0 && j == 0) arm[i][j] = a[l-1][c-1];
			if (i == 0 && j == 1) arm[i][j] = -a[i][j];
			if (i == 1 && j == 0) arm[i][j] = -a[i][j];
			if (i == 1 && j == 1) arm[i][j] = aux;
		}
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int matriz_a[l][c] = {{1,2},{3,4}};
	int matriz_inv[l][c],i,j,aux;
	
	inverter(matriz_a,matriz_inv,2);

	printf("Matriz A:\n");
	for(i = 0;i<l;i++) {
		for(j = 0;j<c;j++) printf("%d ",matriz_a[i][j]);
		printf("\n");
	}
	printf("\n");
	
	printf("Matriz Inversa da Matriz A é:\n");
	for(i = 0;i<l;i++) {
		for(j = 0;j<c;j++) printf("%d ",matriz_inv[i][j]);
		printf("\n");
	}
	
	return 0;
}
