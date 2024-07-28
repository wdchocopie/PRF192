#include<stdio.h>

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

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}