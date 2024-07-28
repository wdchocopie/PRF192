#include<stdio.h>
int main(){
    float a, b, x;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    if (a == 0){
        if (b == 0){
            printf("Infinite solutions\n");
        }
        else{
            printf("No solution\n");
        }
    }
    else{
        x = -b/a;
        printf("x = %g\n", x);
    }
}