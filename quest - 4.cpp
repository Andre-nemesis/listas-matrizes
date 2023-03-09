#include<stdio.h>
#define l 2
#define c 2

int main () {
    int matriz_a[l][c] = {{2,3},{1,4}};
    int det,i,j;
    
    det = (matriz_a[0][0] * matriz_a[1][1]) - (matriz_a[1][0] * matriz_a[0][1]);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("Determinante: %d",det);
    
    return 0;
}

