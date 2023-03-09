#include <stdio.h>
#include <locale.h>
#define l 3
#define c 3

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[l][c] = {{2, 0, 0}, {0, 4, 0}, {0, 0, 6}};
    int i, j;
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz diagonal Principal de A é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == j) printf("%d", matriz_a[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz Diagonal Secundária de A é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == 0 && j == 2) printf("%d ", matriz_a[i][j]);	
        	else if(i == 1 && j == 1) printf("%d ", matriz_a[i][j]);	
        	else if(i == 2 && j == 0) printf("%d ", matriz_a[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    return 0;
}

