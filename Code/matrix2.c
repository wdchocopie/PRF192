#include <stdio.h>
#include <math.h>
#define MAX 100

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int i, int j, int k){
    int n, m, p;
    for (m = 0; m < i; m++ ){
        for (n = 0 ; n < j; n++){
            c[m][n] = 0;
            for (p = 0; p < k; p++){
                c[m][n] += a[m][p] * b[p][n];
            }
        }
    }
}

int main(){
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int i, j, n, a1, b1;
    printf("Enter i: ");
    scanf("%d", &i);
    printf("Enter j: ");
    scanf("%d", &j);
    printf("Enter k: ");
    scanf("%d", &n);
    printf("Enter matrix a:\n");
    for (a1 = 0; a1 < i; a1++){
        for (b1 = 0; b1 < n; b1++){
            printf("a[%d][%d]: ", a1, b1);
            scanf("%d", &a[a1][b1]);
            fflush(stdin);
        }
    }
    printf("Enter matrix b:\n");
    for (a1 = 0; a1 < n; a1++){
        for (b1 = 0; b1 < j; b1++){
            printf("b[%d][%d]: ", a1, b1);
            scanf("%d", &b[a1][b1]);
            fflush(stdin);
        }
    }
    multiplyMatrix(a, b, c, i, j, n);
    printf("Matrix c = a * b:\n");
    for (a1 = 0; a1 < i; a1++){
        for (b1 = 0; b1 < j; b1++){
            printf("%d ", c[a1][b1]);
        }
        printf("\n");
    }
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();
}