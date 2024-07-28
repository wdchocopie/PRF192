#include <stdio.h>
#include <math.h>

int main(){
    double a , b ,c;
    double x1 , x2;
    double delta;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0){
                printf("Infinite solutions\n");
            }
            else {
                printf("No solution\n");
            }
        }
        else {
            x1 = -c/b;
            printf("x = %g\n", x1);
        }
    }
    else{
        delta = b*b - 4*a*c;    
        if (delta > 0){
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            printf("x1 = %g\n", x1);
            printf("x2 = %g\n", x2);
        }
        else if (delta == 0){
            x1 = -b/(2*a);
            printf("x = %g\n", x1);
        }
        else{
            printf("No solution\n");
        }
        
    }

}