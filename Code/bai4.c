#include<stdio.h>
#include<math.h>

int main(){
    double result=0.0;
    int loop=1, n;

    while(loop==1){
        printf("Enter n = ");
        scanf("%d", &n);
        if (n > 1){
            loop--;
        }
    }

    for(int i = 1; i <= n; i++){
        result += 1.0/i;
    }
    printf("Sum S = %lf", result);

    return 0;
}