#include<stdio.h>
#include<math.h>

void quadraticEquation(){
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
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();
}

void bankDeposit(){
    double money, rate, time;
    printf("Enter money ($): ");
    scanf("%lf", &money);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time (month): ");
    scanf("%lf", &time);
    if(money < 0 || rate >= 0.1 || rate < 0 || time < 0){
        printf("Invalid input\n");
        bankDeposit();
    }
    double result = money * pow((1 + rate), time);
    printf("Outcome: %lf\n", result);
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();
}

void menu(){
    int choice;
    fflush(stdin);
    printf("=====Menu=====\n");
    printf("1. Quadratic equation\n");
    printf("2. Bank deposit\n");
    printf("3. Exit\n");
    printf("==============\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            quadraticEquation();
            break;
        case 2:
            bankDeposit();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice\n");
            menu();
    }
}

int main(){
    menu();
    return 0;
}