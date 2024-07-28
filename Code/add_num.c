#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("s1+s2+...+%d = %d\n", n, n*(n+1)/2);
    return 0;
    }