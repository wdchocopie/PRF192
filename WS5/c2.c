#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int root = (int)sqrt(num);
    return (root * root == num);
}

int main() {
    int n;
    
    // Prompt user for the size of the array
    printf("Enter n = ");
    scanf("%d", &n);

    // Check for invalid input
    if (n <= 0) {
        printf("n = %d. Invalid input!\n", n);
        return 1;
    }

    int array[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Print the array in reverse order
    printf("\nArray in reverse order:");
    for (int i = n - 1; i >= 0; i--) {
        printf(" %d", array[i]);
    }
    printf("\n");

    // Find the largest perfect square in the array
    int maxSquare = -1;
    for (int i = 0; i < n; i++) {
        if (isPerfectSquare(array[i])) {
            if (array[i] > maxSquare) {
                maxSquare = array[i];
            }
        }
    }

    // Print the result
    if (maxSquare == -1) {
        printf("The array has no square number.");
    } else {
        printf("The largest square number: %d", maxSquare);
    }

    return 0;
}

