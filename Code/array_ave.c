#include<stdio.h>
#include<math.h>

int main(){
    int a[1000], i, n; 
    double sum = 0, ave;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
        fflush(stdin);
    }
    ave = sum/n;
    printf("Average: %g\n", ave);
    printf("\nPress Enter to continue\n");
    fflush(stdin);
    getchar();
}