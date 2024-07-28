#include <stdio.h>
#include <math.h>

// Function to check if the number is prime or not
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if the number is square or not
int isSquare(int n) {
    int root = (int)sqrt(n);
    return root * root == n;
}

// Function to check if the number is perfect or not
int isPerfect(int n) {
    if (n <= 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                sum += i + n / i;
            } else {
                sum += i;
            }
        }
    }
    return sum == n;
}

void menu() {
    printf("====== Menu ======\n");
    printf("1. Prime\n");
    printf("2. Square\n");
    printf("3. Perfect\n");
    printf("4. Exit\n");
    printf("==================\n");
}

int choice_Input() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

// Main function
int main() {
    int n, choice = 0, check = 1;

    while (check) {
        menu();
        choice = choice_Input();

        if (choice >= 1 && choice <= 3) {
            printf("Enter a number: ");
            scanf("%d", &n);
        }

        switch (choice) {
            case 1:
                // Calling Prime
                if (isPrime(n)) {
                    printf("\nPrime\n\n");
                } else {
                    printf("\nNot Prime\n\n");
                }
                break;
            case 2:
                // Calling Square
                if (isSquare(n)) {
                    printf("\nSquare\n\n");
                } else {
                    printf("\nNot Square\n\n");
                }
                break;
            case 3:
                // Calling Perfect
                if (isPerfect(n)) {
                    printf("\nPerfect\n\n");
                } else {
                    printf("\nNot Perfect\n\n");
                }
                break;
            case 4:
                check = 0;
                break;
            default:
                printf("\nInvalid choice\n\n");
                break;
        }
    }
    return 0;
}
