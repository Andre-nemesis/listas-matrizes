#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void ident(int a[][2], int ind[][2], int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) ind[i][j] = 1;
            else ind[i][j] = 0;
        }
    }
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[2][2] = {{1, 2}, {3, 4}};
    int Ind[2][2],i,j;
    
    ident(matriz_a, Ind, 2);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz identidade da matriz A é:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) printf("%d", Ind[i][j]);
        printf("\n");
    }
    
    return 0;
}

