#include<stdio.h>
#define MAX 32767


void inputArray(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}
int main(){
    int a[MAX], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array a:\n");
    inputArray(a, n);
    printf("Output array a:\n");
    outputArray(a, n);    
}