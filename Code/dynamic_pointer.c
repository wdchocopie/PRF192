#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int *p;
    printf("%d\n", &p);
    p = (int *)malloc(sizeof(int));
    printf("%d\n", p);
    free(p);
    return 0;

}