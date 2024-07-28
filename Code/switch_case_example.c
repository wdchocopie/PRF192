#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float x;
    double fx;
    printf( "== Choose a function ==\n"
            "1. f(x) = x^2 + 1\n"
            "2. f(x) = exp(x) + x\n"
            "3. f(x) = x^2 + x + 1\n"
            "Default: f(x) = 10\n");
    printf("Choose function: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%f", &x);
    switch(n){
        case 1:
            fx = x*x+1;
            break;
        case 2:
            fx = exp(x) + x;
            break;
        case 3:
            fx = x * x + x + 1;
            break;
        default:
            fx = 10;
    }
    printf("f(%d) = %g\n", n, fx);
    return 0;
}