#include <stdio.h>

int main(){
    int i , j;
    printf("Enter the number: ");
    scanf("%d%d", &i ,&j);
    for(int a = 1; a <= i; a++){
        printf("  %d", a);
    }
    printf("\n");
    for(int a = 1; a <= i; a++){
        printf("%d", a);
        for(int b = 1; b <= j; b++){
            printf(" %d ", a*b);
            if (b == i){
                break;
            }
        }
        printf("\n");
    }

    return 0;
}