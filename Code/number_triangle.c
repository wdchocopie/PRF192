#include<stdio.h>

int binomialCoeff(int n, int k)
{
    // Base Cases
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}

int main(){
    int n, check = 1;
    while(check){
        printf("Enter n: ");
        scanf("%d", &n);
        if(n > 0 && n < 10){
            check = 0;
        }
        fflush(stdin);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}