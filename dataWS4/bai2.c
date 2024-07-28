#include<stdio.h>

int main(){

    int n;
    printf("N = ");
    scanf("%d", &n);

    int arr[n];
    int i;

    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la:\n");
    for(i= 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int x;
    printf("\nX = ");
    scanf("%d", &x);

    printf("Cac vi tri cua %d trong mang la:\n", x);
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            printf("%d ", i);
        }
    }

    int j, temp;
    printf("\nMang sau khi sap xep la:\n");
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp; 
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}