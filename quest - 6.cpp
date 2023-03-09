#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

int det(int a[][1]){
	int d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    return d;
}

void cofator(int a[][c], int cof[][c], int n) {
    int i, j, x, y, k, p;
    int sub_m[1][1];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            k = 0;
            for (x = 0; x < n; x++) {
                if (x == i) continue;
                p = 0;
                for (y = 0; y < n; y++) {
                    if (y == j) continue;
                    sub_m[k][p] = a[x][y];
                    p++;
                }
                k++;
            }
            cof[i][j] = det(sub_m);
            if ((i+j) % 2 != 0) cof[i][j] *= -1;
        }
    }
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[l][c] = {{2,3},{1,4}};
    int adj_a[l][c],i,j;
    
    cofator(matriz_a, adj_a, 2);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");

    printf("O cofator de A é:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", adj_a[i][j]);
        printf("\n");
    }
    
    return 0;
}
