#include <stdio.h>

int main() {
    unsigned long long n, digit, sum = 0;
    scanf("%lld", &n);
    while(n > 0)
    {
    	digit = n % 10;
    	sum += digit;
    	n = n / 10;
	}
	if(n <= 0){
		printf("Invalid input");
		return 0;
	}
	printf("%d", sum);
	return 0;
}