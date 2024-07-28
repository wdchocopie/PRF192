#include<stdio.h>
#include<math.h>

int main(){
    double x, fx;
    printf("Enter x: ");
    scanf("%lf", &x);
    fx = ( ((x*x) + exp(x)) / (1 + (x*x)) );
    printf("Output: %lf", fx);
    return 0;
}