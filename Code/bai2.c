#include<stdio.h>
#include<math.h>

int main(){
    double x, fx;
    printf("Enter x = ");
    scanf("%lf", &x);
    if (x > 0 && x !=2){
        fx = (((x * x) + (2 * sqrt(x)))/(x - 2));
    }
    else {
        fx = 1;
    }
    printf("Output f(x) = %lf", fx);
    return 0;
}