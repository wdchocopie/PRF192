#include<stdio.h>
#include<math.h>

void divisorscan(int n){
    int i;
    for(i = 1; i*i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
            if (i != n/i){
                printf("%d ", n/i);
            }
        }
    }
}

int main(){
    int n;
    int check = 1;
    while(check){
        scanf("%d", &n);
        while (getchar()!= '\n');
        divisorscan(n);
        printf("\nContinue? (1/0): ");
        scanf("%d", &check);
        while (getchar()!= '\n');
    }

    return 0;
}