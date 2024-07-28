#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("absolute value of %d is %d\n", n, abs(n));
    return 0;
    /*  Another route to the same destination
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int y = (n < 0) ? -n : n;
    printf("absolute value of %d is %d\n", n, y);
    */
}