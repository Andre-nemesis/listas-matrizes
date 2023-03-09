#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void rotac(int a[][2], int r[][2], int area) {
    int i, j;
    for (i = 0; i < area; i++) for (j = 0; j < area; j++) r[i][j] = a[area-1-j][i];   
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[l][c] = {{1, 2}, {3, 4}};
    int Rot[l][c],i, j;
    
    rotac(matriz_a, Rot, 2);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz de rotação de 90 graus da Matriz A é:\n");
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", Rot[i][j]);
        printf("\n");
    }
    
    return 0;
}
