#include <stdio.h>
#include <math.h>

void menu() {
    printf("====================================\n");
    printf("1. Test vowels of character\n");
    printf("2. Sum of divisors\n");
    printf("3. Test prime for an integer\n");
    printf("Others: Exit\n");
    printf("====================================\n");
}

int isPrime() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
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

int sumDivisors() {
    int n, a = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a += i;
            if (i != n / i) {
                a += n / i;
            }
        }
    }
    return a;
}

int testVowels() {
    getchar(); // to consume the newline character left by the previous scanf
    char c;
    printf("Input a character: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    return 0;
}

int main() {
    int test, n = 1;
    while (n == 1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &test);
        switch (test) {
            case 1:
                if (testVowels()) {
                    printf("The character is a vowel\n");
                } else {
                    printf("The character is not a vowel\n");
                }
                break;
            case 2:
                printf("Sum of divisors: %d\n", sumDivisors());
                break;
            case 3:
                if (isPrime()) {
                    printf("The number is a prime\n");
                } else {
                    printf("The number is not a prime\n");
                }
                break;
            default:
                return 0;
        }
    }
    return 0;
}
