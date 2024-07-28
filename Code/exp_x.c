#include<stdio.h>
#include<math.h>

int main() {
    double x;
    scanf("%lf", &x);
    double f = (exp(x)+sqrt(x)+1)/(x*x+1);
    printf("f(x) = %lf\n", f);
    return 0;
    }