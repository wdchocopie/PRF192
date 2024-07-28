#include<stdio.h>
#include<math.h>

int main(){
    int n, loop=1, result=1;

    while(loop==1){
        printf("Enter n: ");
        scanf("%d", &n);
        if (n > 0 && n < 10){
            loop--;
        }
    }
    
    for(int i = 1; i <= n ; i++ ){
        result *= i;
    }
    printf("%d! = %d", n, result);
    return 0;
}