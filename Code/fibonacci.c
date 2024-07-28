#include <stdio.h>
#include <math.h>

int fibo(int n){
    unsigned long long int F[1000];
    F[0] = 1; 
    F[1] = 1;
    for(int i = 2; i <= n; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}