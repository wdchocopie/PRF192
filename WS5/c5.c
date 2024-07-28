#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    
    printf("n = ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("n = %d, invalid input!\n", n);
        return 1;
    }
    
    int array[n];
    int primeCount = 0;

    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &array[i]);
        if (isPrime(array[i])) {
            primeCount++;
        }
    }

    printf("Prime numbers in array: %d\n", primeCount);
    
    return 0;
}

