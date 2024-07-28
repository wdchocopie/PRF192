#include<stdio.h>
#include<math.h>

int fibo(int n_1){
    unsigned long long int F[1000];
    F[0] = 1; 
    F[1] = 1;
    for(int i = 2; i <= n_1; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n_1];
}

int isFibo(unsigned long long int n_2){
    int i;
    for(i = 0; fibo(i) <= n_2; i++){
        if (fibo(i) == n_2){
            return 1;
        }
    }
    return 0;

}

int main(){
    unsigned long long int n;
    scanf("%lld",&n );
    if(isFibo(n)){
        printf("%lld is in Fibonacci", n);
    }
    else{
        printf("%lld isn't in Fibonacci", n);
    }
    return 0;
}