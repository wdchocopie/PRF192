#include<stdio.h>

int main(){
    int x, y;
    char choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    getchar();
    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &choice);

    switch(choice){
        case '+':
            printf("%d + %d = %d\n", x, y, x+y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x-y);
            break;
        case '*':
            printf("%d * %d = %d\n", x, y, x*y);
            break;
        case '/':
            if (y == 0){
                printf("Division by zero is not allowed\n");
            }
            else{
                printf("%d / %d = %d\n", x, y, x/y);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}