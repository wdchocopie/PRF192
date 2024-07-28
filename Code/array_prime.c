#include<stdio.h>
#include<math.h> 
    
int isPrime(int n){
    int i;
    if (n < 2){
        return 0;
    }
    for (i =2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a[1000],i,n;
    printf ("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        fflush(stdin);
    }
    for (i = 0; i < n; i++){
        if (isPrime(a[i]) == 1){
            printf("a[%d] = %d is Prime\n", i, a[i]);
        }
    }
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();

}