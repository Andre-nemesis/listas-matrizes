#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

int det(int a[][2]){
	int d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    return d;
}

void cofator(int a[][3], int cof[][3], int n) {
    int i, j, x, y, k, p;
    int sub_m[2][2];

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

void transp(int a[][3], int b[][3], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
}

void adjunta(int a[][3], int b[][3], int n) {
    int arm[3][3];
    cofator(a, arm, n);
    transp(arm, b, n);
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int matriz_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int adj_a[3][3];
    adjunta(matriz_a, adj_a, 3);
    int i, j;
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", matriz_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    
    printf("A adjunta de A é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", adj_a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


