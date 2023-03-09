#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void reflexo(int a[][2], int r[][2], int area) {
    int i, j;
    for (i = 0; i < area; i++) for (j = 0; j < area; j++) r[i][j] = a[i][area-1-j];   
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[l][c] = {{1, 2}, {3, 4}};
    int Reflx[l][c],i, j;
    
    reflexo(matriz_a, Reflx, 2);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz de Reflexão da Matriz A é:\n");
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", Reflx[i][j]);
        printf("\n");
    }
    
    return 0;
}
