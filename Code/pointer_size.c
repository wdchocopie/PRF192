#include<stdio.h>

int main(){
    int *n;
    int m = 10;
    n = &m;
    printf("%d\n", sizeof(n));
    return 0;
}
