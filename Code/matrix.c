#include <stdio.h>
#include <math.h>
#define MAX 100

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]){
    int i, j , k;
    for (i = 0; i < MAX; i++){
        for (j = 0; j < MAX; j++){
            c[i][j] = 0;
            for (k = 0; k < MAX; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main(){
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter matrix a:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            fflush(stdin);
        }
    }
    printf("Enter matrix b:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            fflush(stdin);
        }
    }
    multiplyMatrix(a, b, c);
    printf("Matrix c = a * b:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();
}