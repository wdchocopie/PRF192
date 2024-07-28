#include <stdio.h>
#include <math.h>


int main (){
	int n;
	scanf("%d", &n);
	int isPrime[n];
	int i, j;
	for(i = 0; i <= n;++i) {
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(i = 2; i * i <= n; ++i) {
        if(isPrime[i] == 1) {
            for(j = i * i; j <= n; j += i)
        		isPrime[j] = 0;
        }
    }
    for (i = 2; i < n; i++) {
    	if (isPrime[i] == 1) {
    		printf("%d ", i);
		}
	}
}