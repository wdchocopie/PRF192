#include <stdio.h>

void solve_equation(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            printf("The equation has infinite solutions.\n");
        } else {
            printf("The equation has no solution.\n");
        }
    } else {
        double x = -b / a;
        printf("The equation has one solution, x = %.3f\n", x);
    }
}

int main() {
    double a, b;

    // Input from the user
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);

    // Solve the equation
    solve_equation(a, b);

    return 0;
}

