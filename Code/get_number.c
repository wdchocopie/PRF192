#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("hundreds: %d\n", n/100);
    printf("tens: %d\n", (n%100)/10);
    printf("ones: %d\n", n%10);
    
    return 0;
}