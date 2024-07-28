#include<stdio.h>
#include<math.h>

// Function to check if the number is prime or not
int isPrime(int n){
    int i;
    if (n < 2){
        return 0;
    }
    for (i =2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

// Function to check if the number is square or not
int isSquare(int n){
    int i;
    for(i = 0; i*i <= n; i++){
        if (i*i == n){
            return 1;
        }
    }
    return 0;
}

// Function to check if the number is perfect or not
int isPerfect(int n){
    int i;
    int sum = 0;
    for(i = 1; i*i <= n ; i++){
        if (n % i == 0){
            sum += i;
            if (i != n/i){
                sum += n/i;
            }
        }
    }
    if(sum - n == n && sum - n != 0 && sum - n !=1){
        return 1;
    }
    else{
        return 0;
    }
}

// Main function
int main(){
    int n;
    scanf("%d", &n);
    
    // Calling Prime
    int Prime = isPrime(n);
    if (Prime == 1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    
    // Calling Square
    int Square = isSquare(n);
    if (Square == 1){
        printf("Square\n");
    }
    else {
        printf("Not Square\n");
    }
    
    // Calling Perfect
    int Perfect = isPerfect(n);
    if (Perfect == 1){
        printf("Perfect\n");
    }
    // If the number is square or prime, then it is not perfect
    else if (Perfect == 0 || Prime == 1 || Square == 1){
        printf("Not Perfect\n");
    }
}