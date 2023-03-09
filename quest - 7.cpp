#include <stdio.h>
#include <locale.h>
#define l 3
#define c 3

void ident(int a[][3], int ind[][3], int area) {
    int i, j;
    
    for (i = 0; i < area; i++) {
        for (j = 0; j < area; j++) {
            if (i == j) ind[i][j] = 1;
            else ind[i][j] = 0;
        }
    }
}

void diag(int arm[][3],int a[][3],int area) {
	int m_ident[l][c];
	ident(a,m_ident,area);
	
	for(int i = 0;i < area;i++){
		for(int j = 0; j < area;j++) {
			arm[i][j] = 0;	
			for(int p = 0;p < area;p++) arm[i][j] += m_ident[p][j] * a[i][p] * m_ident[p][j];
		}
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[l][c] = {{2, 0, 0}, {0, 4, 0}, {0, 0, 6}};
    int matriz_diag[l][c], i, j;
    
    diag(matriz_diag,matriz_a,3);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("Calculo da Matriz Diagonal de A é:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_diag[i][j]);
        printf("\n");
    }
    printf("\n");
       
    printf("A matriz diagonal Principal de A é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == j) printf("%d ", matriz_diag[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz Diagonal Secundária de A é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == 0 && j == 2) printf("%d ", matriz_diag[i][j]);	
        	else if(i == 1 && j == 1) printf("%d ", matriz_diag[i][j]);	
        	else if(i == 2 && j == 0) printf("%d ", matriz_diag[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    return 0;
}
