#include<stdio.h>

int swap(int x, int y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swapping: a = %d, b = %d\n", x, y);
    return y;
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    return 0;

}