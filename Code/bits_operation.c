#include<stdio.h>

int main()
{
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    printf("n & m = %d\n", n & m);
    printf("n | m = %d\n", n | m);
    printf("n ^ m = %d\n", n ^ m);
    printf("n == m = %d\n", n == m);
    printf("n != m = %d\n", n != m);
    printf("n > m = %d\n", n > m);
    printf("n < m = %d\n", n < m);
    printf("n >= m = %d\n", n >= m);
    printf("n <= m = %d\n", n <= m);
    return 0;
}