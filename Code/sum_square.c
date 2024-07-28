#include <stdio.h>
#include <math.h>

int sum(int n){
    int i, sum = 0;
    for(i = 1; i <= n; i++){
        if(sqrt(i) == (int)sqrt(i)){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Sum of squares of perfect squares up to %d is %d\n", n, sum(n));
    return 0;
}